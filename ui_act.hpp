int ActionProc(sUIActionNotify_base * anBase) {
  sUIActionNotify_2params * an = static_cast<sUIActionNotify_2params*>(anBase);
  int uiPos= Ctrl->DTgetPos(DTCNT , an->act.cnt);
  int a;
//  IMLOG("ACT %x %d" , act->id , flag);
  if ((an->act.id & IMIB_) == IMIB_CFG) ActionCfgProc(an);
  if ((an->act.id & IMIB_) == IMIB_CNT) ActionCntProc(an);
  if ((an->act.id & IMIB_) == IMIB_PROFILE) ActionProfileProc(an);
  if (an->act.parent == IMIG_MAIN_FILTERS || an->act.id == IMIG_MAIN_FILTERS) return Konnekt::UI::CntList::filters.ActionProc(anBase);
  switch (an->act.id) {
    case IMIA_MAIN_CNT_ADD:
       ACTIONONLY(an);
       a = IMessage(IMC_CNT_ADD);
       SETCNTC(a , CNT_GROUP , GETSTR(CFG_CURGROUP));
//       ICMessage(IMC_CNT_CHANGED , a);
       // Zamiast wysylac przedwczesnie do wszystkich
       // tworzymy ukryta wersje kontaktu.
       Cnt.imAdd(a , true);
       Cnt[a].InfoWndOpen(true);
       return 1;
    case IMIA_CNT_INFO:
       if (an->code == ACTN_CREATE) {
                  ActionStatus(an->act , an->act.cnt!=-1 ? 0 : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         if (uiPos<0) return 0;
         IMessageDirect(IMI_CNT_DETAILS,0,an->act.cnt);
       }
       break;
    case IMIA_CNT_HISTORY:
       if (an->code == ACTN_CREATE) {
                  //ActionStatus(an->act , (an->act.cnt!=-1 && GETCNTI(an->act.cnt,CNT_NET)!=NET_NONE) ? 0 : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         hist_start(an->act.cnt);
       }
       break;
    case IMIA_CNT_SENDEMAIL:
       if (an->code == ACTN_CREATE) {
                  ActionStatus(an->act , (uiPos>0 && *GETCNTC(uiPos , CNT_EMAIL)) ? 0 : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         if (uiPos<=0) return 0;
         ShellExecute(0 , "open" , (char*)(string("mailto:")+GETCNTC(uiPos , CNT_EMAIL)).c_str() , "" , "" , SW_SHOW);
       }
       break;
    case IMIA_CNT_IGNORE:
       if (an->code == ACTN_CREATE) {
           bool ign = uiPos==-1?false:ICMessage(IMC_CNT_IGNORED , Cnt[uiPos].net , (int)GETCNTC(uiPos , CNT_UID))!=0;
           ActionStatus(an->act , (uiPos>0 && Cnt[uiPos].net!=NET_NONE) ? (ign?ACTS_CHECKED:0) : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         if (uiPos<=0) return 0;
         bool ign = ICMessage(IMC_CNT_IGNORED , Cnt[uiPos].net , (int)GETCNTC(uiPos , CNT_UID))!=0;
         if (ign)
             ICMessage(IMC_IGN_DEL , Cnt[uiPos].net , (int)GETCNTC(uiPos , CNT_UID));
         else
             ICMessage(IMC_IGN_ADD , Cnt[uiPos].net , (int)GETCNTC(uiPos , CNT_UID));
       }
       break;
    case IMIA_CNT_ADD:
       if (an->code == ACTN_CREATE) {
                  ActionStatus(an->act , (an->act.cnt!=-1 && GETCNTI(an->act.cnt,CNT_STATUS)&ST_NOTINLIST) ? 0 : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         if (uiPos<=0) return 0;
         SETCNTI(an->act.cnt , CNT_STATUS , 0 , ST_NOTINLIST);
         ICMessage(IMC_CNT_CHANGED , an->act.cnt);
         //ICMessage(IMI_REFRESH_CNT , an->act.cnt);
       }
       break;
    case IMIA_CNT_MSG: case IMIA_CNT_MSGOPEN:
       if (an->code == ACTN_ACTION) {
         if (uiPos<0) return 0;
         Cnt[an->act.cnt].MsgWndOpen();
       }
	   else if (an->code == ACTN_CREATE || (an->code == ACTN_DEFAULT && an->act.id==IMIA_CNT_MSG)) {
		   if (an->act.cnt == -1) {
				if (an->code == ACTN_CREATE) 
					ActionStatus(an->act , ACTS_HIDDEN); 
				else 
					return false;
		   }
           if (uiPos<0) return 0;
           if (an->act.id == IMIA_CNT_MSG) {
               bool use = (ICMessage(IMC_NET_TYPE , GETCNTI(an->act.cnt,CNT_NET)) & IMT_MSGUI) != 0;
			   if (an->code == ACTN_CREATE)
			       ActionStatus(an->act , use ? 0 : ACTS_HIDDEN);
			   else return use;
           } else {
               sMESSAGEWAITING mw;
               mw.net = GETCNTI(uiPos , CNT_NET);
               mw.uid = (char*)GETCNTC(uiPos , CNT_UID);
               mw.type = MT_MESSAGE;
               mw.woflag = MF_SEND;
               ActionStatus(an->act ,
					(IMessage(IMC_MESSAGEWAITING ,0,0,(int)&mw))
					? 0 : ACTS_HIDDEN);
            }
       }
       break;
    case IMIA_CNT_DEL:
       if (an->code != ACTN_ACTION || !an->act.cnt) return 0;
       IACntDel(an->act.cnt);
       break;
    case IMIA_MAIN_OPTIONS_CFG: case IMIG_MAIN_OPTIONS:
       ACTIONONLY(an);
         IMessageDirect(IMI_CONFIG);
       break;
	case IMIG_MSGWND:
		if (anBase->code == ACTN_SETCNT) {
			if (!Cnt.exists(an->act.cnt)) {an->notify2 = 0; return 0;}
			an->notify2 = (int)Cnt[an->act.cnt].hwndMsg;
		}
		break;
	case IMIG_HISTORYWND:
		if (anBase->code == ACTN_SETCNT) {
			an->notify2 = (int)hwndHistory;
		}
		break;
    case IMIA_MSG_SEND:
       ACTIONONLY(an);
          if (Cnt[uiPos].hwndMsg) {
              Cnt[uiPos].MsgSend();
          }
       break;
    case IMIA_MSG_INFO:
       ACTIONONLY(an);
       IMessageDirect(IMI_CNT_DETAILS,0,an->act.cnt);
       break;
    case IMIA_MSG_HISTORY:
       ACTIONONLY(an);
       hist_start(an->act.cnt);
       break;
	case IMIA_MSG_BYENTER:
		if (an->code == ACTN_ACTION) {
			SetProp(Cnt[an->act.cnt].hwndMsg , "MSGBYENTER" , (HANDLE)!GetProp(Cnt[an->act.cnt].hwndMsg , "MSGBYENTER"));
		}
		if (an->code == ACTN_ACTION || an->code == ACTN_CREATE) {
			ActionStatus(an->act , GetProp(Cnt[an->act.cnt].hwndMsg , "MSGBYENTER") ? ACTS_CHECKED : 0);
		}
		break;

    case IMIA_TRAY_SHUTDOWN:
       ACTIONONLY(an);
       ICMessage(IMC_SHUTDOWN);
       break;
    case IMIA_TRAY_SHOW:
       ACTIONONLY(an);
       dockHide(true);
       SetForegroundWindow(hwndMain);
       SetFocus(hwndMain);
       break;
    case IMIA_MAINALPHA:
		if (anBase->code == ACTN_ACTION) {
			SETINT(CFG_UIUSEMAINALPHA , GETINT(CFG_UIUSEMAINALPHA)?0:1);
			UISetAlpha();
		} else if (anBase->code == ACTN_CREATE) {
			int alpha = GETINT(CFG_UIMAINALPHA);
			sUIActionInfo ai(anBase->act);
			ai.mask = UIAIM_STATUS;
			ai.statusMask = ACTS_CHECKED | ACTS_HIDDEN;
			ai.status = (alpha >= 100 || alpha <= -100 || alpha == 0) ? ACTS_HIDDEN : 0;
			ai.status |= (GETINT(CFG_UIUSEMAINALPHA)) ? ACTS_CHECKED : 0;
			UIActionSet(ai);
		}
       break;

    case IMIA_MAIN_DEBUG:
       ACTIONONLY(an);
       IMessage(IMC_DEBUG , 0 , 0 , 1);
       break;
	case IMIA_MAIN_DEBUG_ICO:
		ACTIONONLY(an);
		DebugIcons();
		break;
	case IMIA_MAIN_DEBUG_UI:
		ACTIONONLY(an);
		ICMessage(IMI_DEBUG);
		break;

    case IMIA_MAIN_REPORT:
		if (an->code == ACTN_CREATE) {
			ActionStatus(an->act , ICMessage(IMC_GETBETAANONYMOUS) ? ACTS_HIDDEN : 0);
		} else if (an->code == ACTN_ACTION) {
			IMessage(IMC_REPORT , 0 , 0 , 1);
		}
       break;
    case IMIA_MAIN_BETA:
       ACTIONONLY(an);
       IMessage(IMC_BETA , 0 , 0 , 1);
       break;

	case IMIA_MAIN_ABOUT: case IMIG_MAIN: {
       ACTIONONLY(an);
/*       DialogBox(Ctrl->hDll() , MAKEINTRESOURCE(IDD_ABOUT)
                 , hwndTop , (DLGPROC)AboutDialogProc);
				 */
       HWND about = CreateDialog(Ctrl->hDll() , MAKEINTRESOURCE(IDD_ABOUT)
                 , hwndTop , (DLGPROC)AboutDialogProc);
	   ShowWindow(about , SW_SHOW);
       IMERROR();
	   break;}
    case IMIA_MAIN_WWW:
       ACTIONONLY(an);
       ShellExecute(0 , "open" , resStr(IDS_URL) , "" , "" , SW_SHOW);
       break;
    case IMIA_MAIN_HELP:
       ACTIONONLY(an);
       ShellExecute(0 , "open" , resStr(IDS_URL_SUPPORT) , "" , "" , SW_SHOW);
       break;
    case IMIA_MAIN_DOWNLOADINFO:
       ACTIONONLY(an);
       ShellExecute(0 , "open" , resStr(IDS_URL_DOWNLOADINFO) , "" , "" , SW_SHOW);
       break;
    case IMIA_MAIN_FORUM:
       ACTIONONLY(an);
       ShellExecute(0 , "open" , resStr(IDS_URL_FORUM) , "" , "" , SW_SHOW);
       break;
    case IMIA_MAIN_CNT_SEARCH: case IMIG_MAIN_CNT:
       ACTIONONLY(an);
	   if (IMessage(IM_PLUG_TYPE, NET_FIRST, IMT_NETSEARCH) == 0) {
		   return 0;
	   }
       if (!hwndSearch) {
		   hwndSearch=CreateDialog(Ctrl->hDll() , MAKEINTRESOURCE( GetKeyState(VK_SHIFT)&0x80 ? IDD_SEARCH : IDD_SEARCH_2 )
			  , hwndTop ,  (DLGPROC)SearchDialogProc);
          ShowWindow(hwndSearch , SW_SHOW);
       } else SetForegroundWindow(hwndSearch);
       break;

    case IMIA_MAIN_CNT_IGNORE:
       ACTIONONLY(an);
       IgnoreDialogShow();
       break;
    case IMIA_MAIN_CNT_GROUPS:
       ACTIONONLY(an);
       GroupsDialogShow();
       break;
    case IMIA_MAIN_OPTIONS_PROFILE_NEW:
         ACTIONONLY(an);
         {
           sDIALOG_enter sd;
           sd.title = "nowy Profil";
           sd.info = "Podaj nazw� nowego profilu ...";
           if (!IMessage(IMI_DLGENTER , 0 , 0 , (int)&sd)) return 0;
           if (!*sd.value) return 0;
           ICMessage(IMC_PROFILECHANGE , (int)sd.value , 1);
         }
         break;
    case IMIA_MAIN_OPTIONS_PROFILE_DEL:
         ACTIONONLY(an);
         if (ICMessage(IMI_CONFIRM , (int)"Czy NA PEWNO chcesz usun�� ten profil?\nOperacja NIE B�DZIE mog�a by� cofni�ta!!!"))
           ICMessage(IMC_PROFILEREMOVE);
         break;
    case IMIA_MAIN_OPTIONS_PROFILE_PASS:
         ACTIONONLY(an);
         ICMessage(IMC_PROFILEPASS);
         break;
    case IMIA_MAIN_HISTORY:
         ACTIONONLY(an);
         hist_start();
         break;
    case IMIA_EVENT_SERVER:
       if (an->code == ACTN_ACTION) {
           if (!hwndMsgEvent) {
            hwndMsgEvent=CreateDialog(Ctrl->hDll() , MAKEINTRESOURCE(IDD_SERVEREVENT)
                   , hwndTop , (DLGPROC)ServerEventDialogProc);
            ShowWindow(hwndMsgEvent , SW_SHOW);
         } else SetForegroundWindow(hwndMsgEvent);
         }
       else if (an->code == ACTN_CREATE) {
                if (uiPos<0) return 0;
                  sMESSAGEWAITING mw;
                  mw.net = 0;
                  mw.uid = "";
                  mw.type = MT_SERVEREVENT;
                  ActionStatus(an->act ,
                    (IMessage(IMC_MESSAGEWAITING ,0,0,(int)&mw))
                    ? 0 : ACTS_HIDDEN);
                }
       break;
	case IMIA_EVENT_URL: case IMIA_EVENT_EVENT: {
       cMessage m;
	   m.type = an->act.id == IMIA_EVENT_URL ? MT_URL : MT_EVENT;
       if (an->code == ACTN_ACTION) {
           sMESSAGESELECT ms(NET_BC , 0 , m.type);
		   if (ICMessage(IMC_MESSAGEGET , (int)&ms , (int)&m)) {
			   if (m.type == MT_URL)
					openURLMessage(&m);
			   else {
				   if (m.action.id != IMIA_EVENT_EVENT && Act.exists(m.action)) Act(m.action).call(ACTN_ACTION , (int)&m , 0);
				   else 
				   ICMessage(IMC_MESSAGEQUEUE , (int)&ms);
			   }
		   }
         }
       else if (an->code == ACTN_CREATE) {
                if (uiPos<0) return 0;
                  sMESSAGESELECT ms(0 , 0 , m.type);
                  // Musimy pobrac Title!
                  if (!ICMessage(IMC_MESSAGEGET ,(int)&ms , (int)&m))
                      ActionStatus(an->act , ACTS_HIDDEN);
                  else {
                      CStdString txt = Act(an->act).txt;
                      int pos = txt.find(MSGTITLE_CHAR);
                      if (pos!=txt.npos) txt.erase(pos-1); // Usuwamy dotychczasowy tytu�
                      CStdString Title = GetExtParam(m.ext , "Title");
                      if (!Title.empty()) txt += string(" ") + MSGTITLE_CHAR + string(Title) + MSGTITLE_CHAR;
					  ActionStatus(an->act , 0 , (char*)txt.c_str() , m.type==MT_EVENT ? m.notify : -1);
                      //ActionStatus(an->act , 0);
                  }
                }
	   break;}

	case IMIA_EVENT_OPENANYMESSAGE: {
		if (anBase->code != ACTN_ACTION && anBase->code != ACTN_CREATE)
			return 0;
		cMessage m;
		if (anBase->act.cnt >= 0) {
			sMESSAGESELECT ms(anBase->act.cnt == 0 ? 0 : GETCNTI(anBase->act.cnt , CNT_NET) 
				, anBase->act.cnt == 0 ? 0 : GETCNTC(anBase->act.cnt , CNT_UID) 
				, -1 , MF_MENUBYUI , 0);
			ICMessage(IMC_MESSAGEGET , (int)&ms , (int)&m);
		}
		if (anBase->code == ACTN_ACTION) {
			if ((m.action.id != anBase->act.id && m.action.parent != anBase->act.parent) && Act.exists(m.action))
				Act(m.action).call(ACTN_ACTION , 0 , 0 , anBase->act.cnt);
 			else {
				sMESSAGESELECT ms;
				ms.id = m.id;
				ICMessage(IMC_MESSAGEQUEUE , (int)&ms);
			}
        } else if (anBase->code == ACTN_CREATE) {
			if (!m.id || anBase->act.cnt == -1) {
				ActionStatus(an->act , ACTS_HIDDEN);
				return 0;
			}
            CStdString title = GetExtParam(m.ext , "ActionTitle");
			if (title.empty())
				title = "Otw�rz wiadomo��";
			ActionStatus(anBase->act , 0 , (char*)title.c_str() , m.notify);
        }
	break;}


	case IMIG_PLUGINS:
		if (an->act.parent != IMIG_MAINTB) return 0;
    case IMIA_MAIN_OPTIONS_PLUG:
       ACTIONONLY(an);
       return ICMessage(IMC_PLUGS);


    case IMIA_CNTTIP:
        if (anBase->code == ACTN_CREATEWINDOW) {
            sUIActionNotify_createWindow* cw = static_cast<sUIActionNotify_createWindow*>(anBase);
            SetParent(cntTip->_hwnd , cw->hwndParent);
            SetWindowPos(cntTip->_hwnd , 0 , 0 , 0 , 100 , LISTTIP_HEIGHT , SWP_NOMOVE|SWP_NOZORDER|SWP_NOACTIVATE);
            cw->hwnd = cntTip->_hwnd;
            cw->x+=100;
            cw->y+=LISTTIP_HEIGHT;
        }
        break;
    // Info o kontakcie
	case IMIA_NFO_SAVE_ALL:
        ACTIONONLY(an);
        InfoDialogSave(an->act.cnt , true);
        return 1;
	case IMIA_NFO_SAVE_LOCAL:
        ACTIONONLY(an);
        InfoDialogSave(an->act.cnt , false);
        return 1;
    case IMIA_NFO_CANCEL:
        ACTIONONLY(an);
        InfoDialogCancel(an->act.cnt);
        return 1;
    case IMIA_NFO_REFRESH_ALL:
        ACTIONONLY(an);
        InfoDialogRefresh(an->act.cnt);
        return 1;
    case IMIA_NFO_ADDTOLIST:
       if (an->code == ACTN_CREATE) {
            ActionStatus(an->act , (an->act.cnt!=-1 && GETCNTI(an->act.cnt,CNT_STATUS)&ST_NOTINLIST) ? 0 : ACTS_HIDDEN);
       } else
       if (an->code == ACTN_ACTION) {
         if (uiPos<=0) return 0;
         SETCNTI(an->act.cnt , CNT_STATUS , 0 , ST_NOTINLIST);
         ICMessage(IMC_CNT_CHANGED , an->act.cnt);
         ActionStatus(an->act , ACTS_HIDDEN);
		 UIActionCfgSetValue(sUIAction(IMIG_NFO_DETAILS, IMIA_NFO_NOTONLIST, an->act.cnt), "0");
         //ICMessage(IMI_REFRESH_CNT , an->act.cnt);
       }
       break;
       return 1;
	case IMIA_NFO_NOTONLIST:
        if (an->code == ACTN_CREATE) {
            ActionStatus(an->act , (uiPos>0) ? 0 : ACTS_HIDDEN);
		} else if (an->code == ACTN_GET) {
			sUIActionNotify_buff * anb = (sUIActionNotify_buff *)anBase;
			strcpy(anb->buff, (GETCNTI(an->act.cnt,CNT_STATUS)&ST_NOTINLIST)?"1":"0");
		} else if (an->code == ACTN_SET) {
			sUIActionNotify_buff * anb = (sUIActionNotify_buff *)anBase;
			if (((GETCNTI(anb->act.cnt,CNT_STATUS)&ST_NOTINLIST) != 0) != (*anb->buff == '1') ) {
				SETCNTI(anb->act.cnt , CNT_STATUS , *anb->buff == '1' ? ST_NOTINLIST : 0 , ST_NOTINLIST);
			    ICMessage(IMC_CNT_CHANGED , anb->act.cnt);
			}
		}
		break;

    case 1024: case 1026:
       if (an->code == ACTN_ACTION) {
                       cMessage m;
                       ZeroMemory(&m , sizeof(m));
                       m.net = NET_GG;
                       m.type = MT_MESSAGE;
                       m.fromUid = (an->act.id == 1024)?"200992":"4730258";
                       m.toUid = "";
                       m.body = "Testooooowaaaaa\r\nWiadomo��\r\nDo Ciebie";
                       m.ext = "";
                       m.flag = MF_HANDLEDBYUI;
                       IMessage(IMC_NEWMESSAGE , 0,0,(int)&m,0);
                       ICMessage(IMC_MESSAGEQUEUE , (int)&sMESSAGESELECT(m.net , m.fromUid , m.type , 0 , MF_SEND));
       }
       break;
    case 1025:
       if (an->code == ACTN_ACTION) {
                       cMessage m;
                       ZeroMemory(&m , sizeof(m));
                       m.net = 0;
                       m.type = MT_SERVEREVENT;
                       m.fromUid = "ee";
                       m.toUid = "";
                       m.body = "Wiadomo�� od serwera";
                       m.ext = "";
                       m.flag = MF_HANDLEDBYUI;
                       IMessage(IMC_NEWMESSAGE , 0,0,(int)&m,0);
                       ICMessage(IMC_MESSAGEQUEUE , (int)&sMESSAGESELECT(m.net , m.fromUid , m.type , 0 , MF_SEND));
       }
       break;
    case 1027:
        IMessage(IM_CHANGESTATUS , NET_BC , IMT_PROTOCOL , ST_AWAY , (int)"TEST!!!"); 
        break;
    case 2000:
        if (anBase->code == ACTN_CREATEWINDOW) {
            sUIActionNotify_createWindow * ancw = static_cast<sUIActionNotify_createWindow *>(anBase);
            ancw->hwnd = CreateWindow("STATIC" , ancw->txt , WS_VISIBLE|WS_CHILD|SS_CENTER , ancw->x , ancw->y , 100 , 30 , ancw->hwndParent , 0 , 0 , 0);
            ancw->x+=100;
            ancw->y+=30;
            SendMessage(ancw->hwnd , WM_SETFONT , (WPARAM)ancw->font , 1);
        } else if (anBase->code == ACTN_DESTROYWINDOW) {
            sUIActionNotify_destroyWindow * andw = static_cast<sUIActionNotify_destroyWindow *>(anBase);
            DestroyWindow(andw->hwnd);
        }
        break;

	case IMIA_CFG_SHOWBITS:
		ACTIONONLY(anBase);
		ICMessage(IMI_SET_SHOWBITS);
		break;
	case IMIA_CFG_STARTUP_CLEANUP:
		ACTIONONLY(anBase);
		autostartCleanUp();
		break;

	case Konnekt::UI::ACT::msg_ctrlview: {
		switch (anBase->code) {
			case ACTN_CREATEWINDOW: {
	            sUIActionNotify_createWindow * ancw = static_cast<sUIActionNotify_createWindow *>(anBase);
				cMsgControlRich * mc = new cMsgControlRich(ancw->x , ancw->y , ancw->w , ancw->h , ancw->hwndParent , 0);
				ancw->hwnd = mc->hwnd;
				SetProp(ancw->hwnd , "cMsgControlRich*" , (HANDLE)mc);
				break;}
			case ACTN_DESTROYWINDOW: {
				sUIActionNotify_destroyWindow * andw = static_cast<sUIActionNotify_destroyWindow *>(anBase);
				DestroyWindow(andw->hwnd);
				break;}
			case ACTN_SETCNT:
				an->notify2 = (int)GetDlgItem((HWND)UIActionHandleDirect(sUIAction(0 , anBase->act.parent , anBase->act.cnt)) , IDC_MSG);
				break;
			default: {
				/* Aby przypadkiem nie zak��ca� pracy interfejsu
				// pobieramy Handle przez Direct, �eby nie zmienia�
				// kontaktu aktualnie pod��czonego do kontrolki...
				// UIActionHandleDirect mo�emy u�ywa� tylko dlatego, bo ta akcja
				   , jak i jej rodzic (IMIG_MSGWND i IMIG_HISTORYWND) maj� ACTR_SETCNT
				   
				*/
				HWND hwnd = (HWND)UIActionHandleDirect(an->act);
				cMsgControlRich * mc = reinterpret_cast<cMsgControlRich *>(GetProp(hwnd , "cMsgControlRich*"));
				if (mc) mc->actionProcess(anBase);
				}			
		};
		break;}
	case Konnekt::UI::ACT::msg_ctrlsend:
		switch (anBase->code) {
			case ACTN_CREATEWINDOW: {
	            sUIActionNotify_createWindow * ancw = static_cast<sUIActionNotify_createWindow *>(anBase);
				//ancw->hwnd = CreateWindowEx(0 , "EDIT" , "" , WS_VISIBLE | WS_TABSTOP | WS_CHILD | ES_AUTOVSCROLL | ES_MULTILINE | WS_VSCROLL , ancw->x , ancw->y , ancw->w , ancw->h , ancw->hwndParent , 0 , 0 , 0);
				ancw->hwnd = CreateWindowEx(0 , RICHEDIT_CLASS , "" , WS_VISIBLE | WS_TABSTOP | WS_CHILD | ES_AUTOVSCROLL | ES_MULTILINE | WS_VSCROLL , ancw->x , ancw->y , ancw->w , ancw->h , ancw->hwndParent , 0 , 0 , 0);
				LOGFONTEX lfe = StrToLogFont(GETSTR(CFG_UIF_MSGSEND));
				cRichEditHtml::Init(ancw->hwnd, false, lfe.bgColor);
			    CHARFORMAT cf;
				cf.dwMask = CFM_FACE | CFM_COLOR | CFM_SIZE | CFM_BOLD | CFM_ITALIC | CFM_UNDERLINE; 
				cf.dwEffects = 0;
				cf.crTextColor = lfe.color;
				/* Wysoko�� w lfe jest najcz�ciej ujemna... * 15 daje m/w dobry rozmiar czcionki */
				cf.yHeight = -lfe.lf.lfHeight * 15;
				strcpy(cf.szFaceName , lfe.lf.lfFaceName);
			    cf.cbSize = sizeof(cf);
				SendMessage(ancw->hwnd , EM_SETSEL ,  0, 0);
				SendMessage(ancw->hwnd , EM_SETCHARFORMAT , SCF_ALL , (LPARAM)&cf);
			    //SendMessage(ancw->hwnd , EM_SETCHARFORMAT , SCF_SELECTION , (LPARAM)&cf);
                SetProp(ancw->hwnd, "OldWindowProc", (HANDLE)SetWindowLong(ancw->hwnd , GWL_WNDPROC , (long)EditMsgControlProc));
				SendMessage(ancw->hwnd , EM_LIMITTEXT , IMessage(IM_MSG_CHARLIMIT , GETCNTI(anBase->act.cnt , CNT_NET)) , 0);
				ShowCaret(ancw->hwnd);
				break;}
			case ACTN_DESTROYWINDOW: {
				sUIActionNotify_destroyWindow * andw = static_cast<sUIActionNotify_destroyWindow *>(anBase);
				DestroyWindow(andw->hwnd);
				break;}
			case ACTN_SETCNT:
				an->notify2 = (int)GetDlgItem((HWND)UIActionHandleDirect(sUIAction(0 , anBase->act.parent , anBase->act.cnt)) , Act(an->act).index);
				break;
			case Konnekt::UI::Notify::getMessageSize:
				return (int)SendMessage((HWND)UIActionHandleDirect(an->act) , WM_GETTEXTLENGTH , 0 , 0);
			case Konnekt::UI::Notify::getMessage:{
				Konnekt::UI::Notify::_getMessage * gm = static_cast<Konnekt::UI::Notify::_getMessage *>(anBase);
				GetWindowText((HWND)UIActionHandleDirect(an->act) , gm->_message->body , gm->_size);
				if (!Act(anBase->act).call(UI::Notify::supportsFormatting, 0, 0)) {
					if (gm->_message->body[0] == '^') {
						gm->_message->body[0] = ' ';
						gm->_message->flag |= MF_HTML;
					}
				}
				break;}
			case Konnekt::UI::Notify::insertMsg:{
				Konnekt::UI::Notify::_insertMsg * gm = static_cast<Konnekt::UI::Notify::_insertMsg *>(anBase);
				HWND hwnd = (HWND)UIActionHandleDirect(gm->act);
				CStdString body = gm->_message->body;
				if (Act(anBase->act).call(UI::Notify::supportsFormatting, 0, 0)) {
					if (gm->_message->flag & MF_HTML) {
						cRichEditHtml::SetHTML(hwnd, body,  cMsgControlRich::SetStyleCB);
						ShowCaret(hwnd);
					} else {
						SetWindowText(hwnd , body);
					}
				} else {
					if (gm->_message->flag & MF_HTML) {
						body = "^" + body;
					}
					SetWindowText(hwnd , body);
				}
                SendMessage(hwnd , EM_SETSEL , 0 , 0x7FFFFFFF);
				break;}
			case Konnekt::UI::Notify::insertText:{
				Konnekt::UI::Notify::_insertText * gm = static_cast<Konnekt::UI::Notify::_insertText *>(anBase);
				HWND hwnd = (HWND)UIActionHandleDirect(gm->act);
				CStdString text = gm->_text;
				if (gm->_isHtml && Act(anBase->act).call(UI::Notify::supportsFormatting, 0, 0)) {
					cRichEditHtml::InsertHTML(hwnd, text, cMsgControlRich::SetStyleCB);
				} else {
					if (gm->_isHtml) {
						cPreg preg;
						text = preg.replace("/<.+?>/s", "", text);
					}
					SendMessage(hwnd, EM_REPLACESEL, true, (LPARAM) text.c_str());
				}
				break;}
			case Konnekt::UI::Notify::getSelection:{
				Konnekt::UI::Notify::_getSelection * gm = static_cast<Konnekt::UI::Notify::_getSelection *>(anBase);
				HWND hwnd = (HWND)UIActionHandleDirect(gm->act);
				SendMessage(hwnd , EM_GETSEL , (WPARAM) &gm->_start , (LPARAM) &gm->_end);
				break;}
			case Konnekt::UI::Notify::setSelection:{
				Konnekt::UI::Notify::_setSelection * sm = static_cast<Konnekt::UI::Notify::_setSelection *>(anBase);
				HWND hwnd = (HWND)UIActionHandleDirect(sm->act);
				SendMessage(hwnd , EM_SETSEL , (WPARAM) sm->_start , (LPARAM) sm->_end);
				break;}
			case Konnekt::UI::Notify::getMessageLines: {
				return SendMessage((HWND)UIActionHandleDirect(anBase->act) , EM_GETLINECOUNT , 0 , 0);
				}
			case Konnekt::UI::Notify::getMessageLine: {
				return SendMessage((HWND)UIActionHandleDirect(an->act) , EM_LINEFROMCHAR  , an->notify1 , 0);
				}


		};
		break;
  }
  if (anBase->act.parent == UI::ACT::msg_ctrlsend_menu) {
	  return ActionMsgEditMenuProc(anBase);
  }
  return 0;
}


