 void registerActions(){
   CStdString txt;
   // Ikony typow
   IMLOG(">ComCtl %x isWXP %d" , GetDllVersion(TEXT("comctl32.dll")) , isComctl(6,0));

    Ico[0].ico = LoadIcon(hDll , IDI_BLANK);
    Ico[0].ico_ = LoadIcon(hDll , IDI_BLANK);
    Ico[0].index[0] = ImageList_AddIcon(Ico.iml[0] , Ico[0].ico);
    Ico[0].index[1] = ImageList_AddIcon(Ico.iml[1] , Ico[0].ico);

   Ico.iconRes(IDI_TRAY, "tray");
   Ico[IDI_TRAY].ico_ = LoadIconEx(Ctrl->hDll() , "tray" , 16 , trayBitCount);
   Ico.iconRes(ICON_KONNEKT, "app", 0, IML_16_32);
   Ico.iconRes(ICON_POINT, "point");

   Ico.iconRes(ICON_INFO, "info", 0, IML_16_32);
   Ico.iconRes(ICON_WARNING, "warning", 0, IML_16_32);
   Ico.iconRes(ICON_ERROR, "error", 0, IML_16_32);
   Ico.iconRes(ICON_HELP, "help", 0, IML_16_32);
   Ico.iconRes(ICON_WIZARD, "wizard", 0, IML_16_32);
   Ico.iconRes(ICON_SHOWBITS, "showbits", 0, IML_16_32);

   Ico.iconRes(ICON_CHECKED, "checked", 0, IML_16);
   Ico.iconRes(ICON_YES, "yes", 0, IML_16);
   Ico.iconRes(ICON_NO, "no", 0, IML_16);
   Ico.iconRes(ICON_REFRESH, "refresh", 0, IML_16);
   Ico.iconRes(ICON_NEXT, "next", 0, IML_16);
   Ico.iconRes(ICON_PREVIOUS, "previous", 0, IML_16);
   Ico.iconRes(ICON_APPLY, "apply", 0, IML_16);
   Ico.iconRes(ICON_CANCEL, "cancel", 0, IML_16);
   Ico.iconRes(ICON_DEFAULT, "default", 0, IML_16);
   Ico.iconRes(ICON_IMPORT, "import", 0, IML_16);
   Ico.iconRes(ICON_EXPORT, "export", 0, IML_16);
   Ico.iconRes(ICON_USER, "user", 0, IML_16_32);
   Ico.iconRes(ICON_GROUP, "group", 0, IML_16_32);
   Ico.iconRes(ICON_STATUSINFO, "statusinfo", 0, IML_16);
   Ico.iconRes(ICON_ACCOUNTCREATE, "accountcreate", 0, IML_16);
   Ico.iconRes(ICON_ACCOUNTREMOVE, "accountremove", 0, IML_16);
   Ico.iconRes(ICON_CHANGEPASSWORD, "CHANGEPASSWORD", 0, IML_16);
   Ico.iconRes(ICON_REMINDPASSWORD, "REMINDPASSWORD", 0, IML_16);
   Ico.iconRes(ICON_SECURE, "SECURE", 0, IML_16);
   Ico.iconRes(ICON_UNSECURE, "UNSECURE", 0, IML_16);
   Ico.iconRes(ICON_SEARCH, "SEARCH", 0, IML_16);
   Ico[ICON_SEARCH].ico_ = LoadIconEx(Ctrl->hDll(), "SEARCH" ,10);
   Ico.iconRes(ICON_PLUGIN, "PLUGIN", 0, IML_16_32);
   Ico.iconRes(ICON_URL, "URL", 0, IML_16);
   Ico.iconRes(ICON_BETA, "BETA", 0, IML_16);
   Ico.iconRes(ICON_OPTIONS, "options", 0, IML_16_32);
   Ico.iconRes(ICON_DELETE, "delete", 0, IML_16);

   Ico.iconRes(IDI_TB_PLUGINS, "plugin", 0, IML_16_32);



   Ico.iconRes(UIIcon(IT_STATUS,0,ST_OFFLINE,0),IDI_ST_OFFLINE);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_ONLINE,0),IDI_ST_ONLINE);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_AWAY,0),IDI_ST_AWAY);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_COMPOSING,0),IDI_ST_COMPOSING);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_HIDDEN,0),IDI_ST_HIDDEN);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_NA,0),IDI_ST_NA);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_DND,0),IDI_ST_DND);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_CHAT,0),IDI_ST_CHAT);
   Ico.iconRes(UIIcon(IT_STATUS,0,ST_BLOCKING,0),IDI_ST_BLOCKING);
//   Ico.iconRes(UIIcon(IT_STATUS,0,ST_UNKNOWN,0),IDI_ST_AWAY);
   Ico.iconRes(IDI_NEW_USER);
   Ico.iconRes(IDI_NET_NONE);
   Ico.iconRes(IDI_TIP_MAIL);
   Ico.iconRes(IDI_TIP_PHONE);
   Ico.iconRes(IDI_TIP_REASON);
   Ico.iconRes(IDI_TIP_NAME);
   Ico.iconRes(IDI_TIP_INFO);
   Ico.iconRes(IDI_NFO_CANCEL, "cancel", 0, IML_16);
   Ico.iconRes(IDI_NFO_REFRESH, "refresh", 0, IML_16);
   Ico.iconRes(IDI_NFO_SAVE, "apply", 0, IML_16);
   Ico.iconRes(UIIcon(2,0,0,0),IDI_NET_NONE);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeMessage,0),IDI_MT_MESSAGE);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeFile,0),IDI_MT_FILE);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeServerEvent,0),IDI_MT_SERVEREVENT);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeEvent,0),IDI_MT_SERVEREVENT);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeCntEvent,0),IDI_MT_SERVEREVENT);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeMail,0),IDI_MT_MAIL);
   Ico.iconRes(UIIcon(IT_MESSAGE,0,Message::typeUrl,0),IDI_MT_URL);

   Ico.iconRes(UIIcon(IT_OVERLAY,0,1,0),IDI_OVR_MAIL,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,2,0),IDI_OVR_SMS,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,7,0),IDI_OVR_INFO,0,IML_ICO);

   Ico.iconRes(UIIcon(IT_OVERLAY,0,1,1),IDI_OVRB_MAIL,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,2,1),IDI_OVRB_SMS,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,7,1),IDI_OVRB_INFO,0,IML_ICO);

   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_NOTINLIST,0),IDI_OVR_NOTINLIST,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_IGNORE,0),IDI_OVR_IGNORE,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_HIDEBOTHSTATUS,0),IDI_OVR_HIDEBOTH,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_HIDEMYSTATUS,0),IDI_OVR_HIDEMYSTATUS,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_HIDESHISSTATUS,0),IDI_OVR_HIDESHISSTATUS,0,IML_ICO);
   Ico.iconRes(UIIcon(IT_OVERLAY,0,OVR_ACTIVE,0),IDI_OVR_ACTIVE,0,IML_ICO);


   Ico[IDI_WND_CONFIG].ico = LoadIconEx(Ctrl->hDll(), "options" ,16);
   Ico[IDI_WND_CONFIG].ico_ = LoadIconEx(Ctrl->hDll(), "options" ,32);
   Ico[IDI_WND_MSG].ico = LoadIconEx(Ctrl->hDll(), MAKEINTRESOURCE(IDI_WND_MSG) , 16);
   Ico[IDI_WND_MSG].ico_ = LoadIconEx(Ctrl->hDll(), MAKEINTRESOURCE(IDI_WND_MSG) , 32);
   Ico[IDI_WND_MSG_NEW].ico = LoadIconEx(Ctrl->hDll(), MAKEINTRESOURCE(IDI_WND_MSG_NEW) , 16);
   Ico[IDI_WND_MSG_NEW].ico_ = LoadIconEx(Ctrl->hDll(), MAKEINTRESOURCE(IDI_WND_MSG_NEW) , 32);
   Ico[IDI_WND_MAIN].ico = LoadIconEx(Ctrl->hDll(), "app" , 16);
   Ico[IDI_WND_MAIN].ico_ = LoadIconEx(Ctrl->hDll(), "app" , 32);
   Ico[IDI_WND_SEARCH].ico = LoadIconEx(Ctrl->hDll(), "search" , 16);
   Ico[IDI_WND_SEARCH].ico_ = LoadIconEx(Ctrl->hDll(), "search" , 32);
   Ico[IDI_WND_INFO].ico = LoadIconEx(Ctrl->hDll(), "user",16);
   Ico[IDI_WND_INFO].ico_ = LoadIconEx(Ctrl->hDll(), "user",32);
   // Inne ikony
   Ico.iconRes(IDI_ENTER);
//   Ico[IDI_RESET].bmp=LoadImage((HINSTANCE)ID,MAKEINTRESOURCE(2), IMAGE_BITMAP , 0,0,LR_LOADTRANSPARENT|LR_SHARED);
   // Grupy glowne
   Act[0].cnt = 0;
   Act[0].insert(IMIG_MAINWND , -1 , "IMIG_MAINWND" , ACTS_GROUP);
     Act[IMIG_MAINWND].type |= ACT_WNDMAIN;
	 Act[IMIG_MAINWND].insert(IMIG_BAR , -1 , "IMIG_BAR" , ACTS_GROUP | ACTSBAR_BOTTOM | ACTSBAR_LOCKED);
       Act[IMIG_BAR].type |= ACT_MENUBRANCH;
     Act[IMIG_MAINWND].insert(IMIG_TRAY , -1 , "IMIG_TRAY" , ACTS_GROUP);
       Act[IMIG_TRAY].type |= ACT_MENUBRANCH;
     Act[IMIG_MAINWND].insert(IMIG_CNT , -1 , "IMIG_CNT" , ACTS_GROUP);
       Act[IMIG_CNT].type |= ACT_MENUBRANCH | ACT_FORCNT;

   Act[0].insert(IMIG_MSGWND , -1 , "IMIG_MSGWND" , ACTS_GROUP | ACTR_SETCNT);
     Act[IMIG_MSGWND].type |= ACT_WNDMSG | ACT_FORCNT;
	 Act[IMIG_MSGWND].insert(IMIG_MSGBAR , -1 , "IMIG_MSGBAR" , ACTS_GROUP | ACTSBAR_NOALIGN);
       Act[IMIG_MSGBAR].type |= ACT_MENUBRANCH;
     // Kontrolki wiadomo�ci
   Act[IMIG_MSGWND].insert(Konnekt::UI::ACT::msg_ctrlview , -1 , "UI::ACT::msg_view" , ACTT_HWND | ACTR_SETCNT);
   Act[IMIG_MSGWND].insert(Konnekt::UI::ACT::msg_ctrlsend , -1 , "UI::ACT::msg_send" , ACTT_HWND | ACTR_SETCNT);

   Act[IMIG_MSGWND].insert(Konnekt::UI::ACT::msg_ctrlsend_menu , -1 , "UI::ACT::msg_ctrlsend_menu" , ACTS_GROUP | ACTR_SETCNT); {
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_undo , -1 , "Cofnij", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_redo , -1 , "Powt�rz", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(0 , -1 , "", ACTT_SEPARATOR);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_cut , -1 , "Wytnij", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_copy , -1 , "Kopiuj", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_paste , -1 , "Wklej", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_paste_nf , -1 , "Wklej bez formatowania", 0);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_paste_qt , -1 , "Wklej jako cytat", 0);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_delete , -1 , "Usu�", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(0 , -1 , "", ACTT_SEPARATOR);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_select , -1 , "Zaznacz wszystko", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(0 , -1 , "", ACTT_SEPARATOR);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_hist_previous , -1 , "Poprzednia wiadomo��", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_hist_next , -1 , "Nast�pna wiadomo��", ACTR_INIT);
	   Act[UI::ACT::msg_ctrlsend_menu].insert(UI::ACT::msg_ctrlsend_menu_hist_clear , -1 , "Wyczy�� ostatnie wiadomo�ci", ACTR_INIT);

   }
   Act[0].insert(IMIG_CFGWND , -1 , "IMIG_CFGWND" , ACTS_GROUP);
     Act[IMIG_CFGWND].type |= ACT_WNDCFG;
     Act[IMIG_CFGWND].insert(IMIG_CFG , -1 , "Ustawienia" , ACTS_GROUP);
       Act[IMIG_CFG].type |= ACT_CFGBRANCH;
   Act[0].insert(IMIG_NFOWND , -1 , "IMIG_NFOWND" , ACTS_GROUP);
     Act[IMIG_NFOWND].type |= ACT_WNDNFO | ACT_FORCNT;
     Act[IMIG_NFOWND].insert(IMIG_NFO , -1 , "Informacje o kontakcie" , ACTS_GROUP);
       Act[IMIG_NFO].type |= ACT_CFGBRANCH;
     Act[IMIG_NFOWND].insert(IMIG_NFO_BAR , -1 , "IMIG_NFO_BAR" , ACTS_GROUP | ACTSBAR_NOALIGN);
       Act[IMIG_NFO_BAR].type |= ACT_MENUBRANCH;
   Act[IMIG_BAR].insert(IMIG_MAINTB , -1 , "" , ACTS_GROUP | /*ACTSTB_DARROWS  |  ACTSTB_LIST | */ ACTSTB_MIXED | ACTSTB_WRAP /*| ACTSBAND_FULL*/);
   Act[IMIG_BAR].insert(IMIG_STATUS , -1 , "" , ACTS_GROUP | ACTSTB_LIST | /*ACTSTB_MIXED |*/ ACTSTB_SHOWTEXT | ACTSTB_WRAP);
   Act[IMIG_BAR].insert(IMIG_SHORTCUTTB , -1 , "" , ACTS_GROUP | ACTS_HIDDEN);

   if (GETINT(CFG_UICNTTIPDOCKED) && GETINT(CFG_UIINFOTIP)) {
       // Dodaje belke ze statusem
       Act[IMIG_BAR].insert(IMIA_CNTTIP , 0 , "" , ACTT_HWND);
   }

   txt = "Konnekt";
   if (ShowBits::checkBits(ShowBits::showTooltipsBeginner)) {
	   txt += AP_TIP "Menu programu" AP_TIP_WIDTH "50";
	   txt += AP_TIPICONURL "reg://IML_32/" + inttostr(ICON_KONNEKT) + ".ico";
   }
   Act[IMIG_MAINTB].insert(IMIG_MAIN , -1 , txt , ACTS_GROUP /*| ACTS_WHOLEDROPDOWN */  , Ico.iconRes(IDI_TB_MAIN));

   //Events
//   Act[IMIG_EVENT_PARENT].insert(0 , -1 , "zdarzenia" , ACTS_SEPARATOR );

   Act[IMIG_EVENT_PARENT].insert(IMIG_EVENT , -1 , "zdarzenia" , ACTS_GROUP | ACTS_HIDDEN /*| ACTS_WHOLEDROPDOWN*/    , IDI_TB_MAIN);
   Act[IMIG_EVENT].insert(IMIA_EVENT_SERVER , 0 , "Wiadomo�� od serwera" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(5,0,Message::typeServerEvent,0));
   Act[IMIG_EVENT].insert(IMIA_EVENT_URL , 0 , "URL" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(IT_MESSAGE,0,Message::typeUrl,0));
   Act[IMIG_EVENT].insert(IMIA_EVENT_EVENT , 0 , "" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(IT_MESSAGE,0,Message::typeEvent,0));
   Act[IMIG_EVENT].insert(IMIA_EVENT_OPENANYMESSAGE , 0 , "" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(IT_MESSAGE,0,Message::typeEvent,0));

//   Act[IMIG_EVENT_PARENT].insert(IMIA_DEBUG , -1 , "Test" , ACTS_SHOWTEXT , 0);


//   Act[IMIG_UIMAIN].insert(8000 , -1 , "Bleeee" , 0 , 0);
//   Act[IMIG_UIMAIN].insert(7000 , -1 , "Blaaaa" , 0 , 0);

//   Act[IMIG_UISHORTCUT].insert(7000 , -1 , "Shit" , 0 , 0);

//   Act[IMIG_MAIN].insert(0 , -1 , "" , ACTS_BAND|ACTS_NOTRANS|ACTS_NOSELECT , Ico.bmpVRes(2));


   Act[IMIG_MAIN].insert(IMIA_TRAY_SHUTDOWN , -1 , "Zako�cz" , 0 , ICON_CANCEL);
   Act[IMIG_MAIN].insert(0 , -1 , "" , ACTT_SEPARATOR);
   Act[IMIG_MAIN].insert(IMIA_MAIN_ABOUT , -1 , "O programie..." ,  ACTSMENU_BOLD , IDI_TB_MAIN);
   Act[IMIG_MAIN].insert(IMIA_MAIN_WWW , -1 , "WWW", 0, ICON_URL);
   Act[IMIG_MAIN].insert(IMIA_MAIN_HELP , -1 , "Pomoc", 0, ICON_HELP);
   Act[IMIG_MAIN].insert(IMIA_MAIN_FORUM , -1 , "Forum", 0, ICON_INFO);

   if (IMessage(IMC_ISBETA) && ShowBits::checkLevel(ShowBits::levelAdvanced)) {
	   Act[IMIG_MAIN].insert(IMIA_MAIN_BETA , -1 , "Beta testing" , 0, ICON_BETA);
//     Act[IMIG_MAIN].insert(IMIA_MAIN_REPORT , -1 , "Zg�aszanie b�ed�w / propozycji" , ACTR_INIT);
   }

   if (IMessage(IMC_ISDEBUG)) {
     Act[IMIG_MAIN].insert(0 , -1 , "" , ACTT_SEPARATOR);
     Act[IMIG_MAIN].insert(IMIG_MAIN_DEBUG , -1 , "DEV / DEBUG" , ACTS_GROUP);
     Act[IMIG_MAIN_DEBUG].insert(IMIA_MAIN_DEBUG , -1 , "@DEV");
     Act[IMIG_MAIN_DEBUG].insert(IMIA_MAIN_DEBUG_ICO , -1 , "Lista ikon");
     Act[IMIG_MAIN_DEBUG].insert(IMIA_MAIN_DEBUG_UI , -1 , "Lista akcji");
   }





//   if (IMessage(IMC_ISBETA) || IMessage(IMC_ISDEBUG))
//		Act[IMIG_MAIN].insert(0 , -1 , "" , ACTT_SEPARATOR);

   //   Act[IMIG_MAIN].insert(IMIA_MAIN_LOG , -1 , "Log");

   txt = "Kontakty";
   if (ShowBits::checkBits(ShowBits::showTooltipsBeginner)) {
	   txt += AP_TIP "Menu kontakt�w" AP_TIP_WIDTH "50";
	   txt += AP_TIPICONURL "reg://IML_32/" + inttostr(ICON_USER) + ".ico";
   }
     
   Act[IMIG_MAINTB].insert(IMIG_MAIN_CNT , -1 , txt , ACTS_GROUP/*| ACTS_WHOLEDROPDOWN*/ , Ico.iconRes(IDI_TB_ADD));
//   Act[IMIG_MAIN].insert(IMIA_MAIN_SEP1 , -1 , "" , ACTT_SEP); // przerwa

   txt = "Ustawienia";
   if (ShowBits::checkBits(ShowBits::showTooltipsBeginner)) {
	   txt += AP_TIP "Menu ustawie�" AP_TIP_WIDTH "50";
	   txt += AP_TIPICONURL "reg://IML_32/" + inttostr(ICON_OPTIONS) + ".ico";
   }
   Act[IMIG_MAINTB].insert(IMIG_MAIN_OPTIONS , -1 , txt , ACTS_GROUP/*| ACTS_WHOLEDROPDOWN*/ , Ico.iconRes(IDI_TB_OPTIONS));
//   Act[IMIG_MAIN].insert(IMIA_MAIN_SEP2 , -1 , "" , ACTT_SEP); // przerwa
//   Act[IMIG_MAIN].insert(0xFEDC , -1 , "Testowy");

   Act[IMIG_MAIN_CNT].insert(IMIA_MAIN_CNT_ADD , -1 , "Dodaj kontakt" , 0 , IDI_TB_ADD);

   if (IMessage(IM_PLUG_TYPE, Net::first, imtNetSearch)) {
		Act[IMIG_MAIN_CNT].insert(IMIA_MAIN_CNT_SEARCH , -1 , "Szukaj znajomego" , ACTSMENU_BOLD , ICON_SEARCH);
   }
   Act[IMIG_MAIN_CNT].insert(IMIA_MAIN_CNT_IGNORE , -1 , "Lista ignorowanych" , 0 , UIIcon(IT_STATUS , 0 , ST_BLOCKING , 0));
   Act[IMIG_MAIN_CNT].insert(IMIA_MAIN_CNT_GROUPS , -1 , "Grupy kontakt�w", 0, ICON_GROUP);

   Act[IMIG_MAIN_OPTIONS].insert(IMIA_MAIN_OPTIONS_CFG , -1 , "Ustawienia" ,ACTSMENU_BOLD, ICON_OPTIONS);
   Act[IMIG_MAIN_OPTIONS].insert(IMIA_MAIN_OPTIONS_PLUG , -1 , "Wtyczki" , 0 , ICON_PLUGIN);
   Act[IMIG_MAIN_OPTIONS].insert(IMIA_CNT_INFO , -1 , "Twoje dane" , 0 , IDI_TB_ADD);

   Act[IMIG_MAIN_OPTIONS].insert(IMIG_MAIN_PROFILE , -1 , "Profil" , ACTS_GROUP);
//   Act[IMIG_MAIN_OPTIONS].insert(IMIG_MAIN_OPTIONS_LIST , -1 , "Lista kontakt�w" , ACTS_GROUP);

   fillProfiles(IMIG_MAIN_PROFILE);
   Act[IMIG_MAIN_PROFILE].insert(0 , -1 , "-",ACTT_SEP);
   Act[IMIG_MAIN_PROFILE].insert(IMIA_MAIN_OPTIONS_PROFILE_DEL , -1 , "Usu�" , 0 , ICON_DELETE);
   Act[IMIG_MAIN_PROFILE].insert(IMIA_MAIN_OPTIONS_PROFILE_NEW , -1 , "Nowy");
   Act[IMIG_MAIN_PROFILE].insert(IMIA_MAIN_OPTIONS_PROFILE_PASS , -1 , "Ustaw has�o");

// Grupa wtyczek...
   if ((GETINT(CFG_UIPLUGINSGROUP) & 0xFFFF)==IMIG_PLUGINS) {
	   int setting = GETINT(CFG_UIPLUGINSGROUP);
	   if (setting & 0x10000)
		   Act[IMIG_BAR].insert(IMIG_PLUGINS , -1 , "" , ACTS_GROUP | ACTSTB_LIST | ACTSTB_MIXED);
	   else	{
			txt = "Wtyczki";
			if (ShowBits::checkBits(ShowBits::showTooltipsBeginner)) {
				txt += AP_TIP "Menu wtyczek" AP_TIP_WIDTH "50";
				txt += AP_TIPICONURL "reg://IML_32/" + inttostr(ICON_PLUGIN) + ".ico";
			}
		   Act[IMIG_MAINTB].insert(IMIG_PLUGINS , -1 , txt , ACTS_GROUP , IDI_TB_PLUGINS);
	   }
   }

   //Tray
   Act[IMIG_TRAY].insert(IMIA_TRAY_STATUS , -1 , "" , ACTT_SEPARATOR);
   if (SetAlpha(0 , 0)) {
	   Act[IMIG_TRAY].insert(IMIA_MAINALPHA , -1 , "Przezroczysto��" , ACTT_CHECK | ACTR_INIT);
   }
   Act[IMIG_TRAY].insert(IMIA_TRAY_SHOW , -1 , "Przywr��");
   Act[IMIG_TRAY].insert(IMIA_TRAY_SHUTDOWN , -1 , "Zako�cz" , 0 , ICON_CANCEL);
 
   // CNT
   Act[IMIG_CNT].insert(IMIA_CNT_OPENANYMESSAGE , -1 , "" , ACTR_INIT , 0);
   Act[IMIG_CNT].insert(IMIA_CNT_MSGOPEN , -1 , "Odbierz wiadomo��" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(IT_MESSAGE,0,Message::typeMessage,0));
   Act[IMIG_CNT].insert(IMIA_CNT_MSG , -1 , "Wy�lij wiadomo��" , ACTR_INIT | ACTSMENU_BOLD , UIIcon(IT_MESSAGE,0,Message::typeMessage,0));
   Act[IMIG_CNT].insert(IMIA_CNT_SENDEMAIL , -1 , "Wy�lij Email'a" , ACTR_INIT  , UIIcon(IT_MESSAGE,0,Message::typeMail,0));
   Act[IMIG_CNT].insert(IMIA_CNT_SEP , -1 , "", ACTT_SEP);
   Act[IMIG_CNT].insert(IMIA_CNT_INFO , -1 , "Wi�cej" , ACTR_INIT | ACTSMENU_BOLD , IDI_TB_ADD);
   Act[IMIG_CNT].insert(IMIA_CNT_IGNORE , -1 , "Ignoruj" , ACTR_INIT , UIIcon(IT_STATUS , 0 , ST_BLOCKING , 0));
//   Act[IMIG_CNT].insert(IMIA_CNT_UNIGNORE , -1 , "Przesta� ignorowa�" , ACTR_INIT);
   Act[IMIG_CNT].insert(IMIA_CNT_ADD , -1 , "Dodaj do listy" , ACTR_INIT);
   Act[IMIG_CNT].insert(IMIA_CNT_DEL , -1 , "Usu�" , 0 , ICON_DELETE);

   // Wiadomosci
   Act[IMIG_MSGBAR].insert(IMIG_MSGSENDTB , -1 , "Inne" , ACTS_GROUP | ACTS_HIDDEN);
   Act[IMIG_MSGBAR].insert(IMIG_MSGTB , -1 , "" , ACTS_GROUP | ACTSBAND_FULL | ACTSTB_LIST | ACTSTB_MIXED);
    Act[IMIG_MSGTB].insert(IMIA_MSG_SEND , -1 , "Wy�lij" , 0 , UIIcon(5,0,Message::typeMessage,0));
	Act[IMIG_MSGTB].insert(IMIA_MSG_BYENTER , -1 , "Enterem" , ACTT_CHECK | ACTR_INIT, IDI_ENTER);
    Act[IMIG_MSGTB].insert(IMIA_MSG_INFO , -1 , "Info" , 0 , UIIcon(2,10,0,0));
    Act[IMIG_MSGSENDTB].insert(IMIA_MSG_SENDMAIL , -1 , "Email" , 0 , 0);
















   // Konfiguracja
//      Act[IMIG_CFG].insert(IMIG_CFG_PLUGINS , -1 , "Wtyczki" , ACTS_GROUP , ICON_POINT);

      Act[IMIG_CFG].insert(0 , -1 , "Wybierz jedn� z pozycji\n"
                                     ""
                                     , ACTT_INFO|ACTSC_FULLWIDTH , 0 , 100, 100);


      Act[IMIG_CFG].insert(IMIG_CFG_SETTINGS , -1 , "Ustawienia" , ACTS_GROUP , IDI_TB_OPTIONS);

	  UIActionAdd(IMIG_CFG_SETTINGS , 0 , ACTT_GROUP ,  "");{
			UIActionAdd(IMIG_CFG_SETTINGS , 0 , ACTT_IMAGE | ACTSC_INLINE , "res://0/options.ico" , 0 , 32 , 32);
			UIActionAdd(IMIG_CFG_SETTINGS , 0 , ACTT_HTMLINFO , 
				"W tym oknie mo�esz zmienia� ustawienia programu Konnekt. Je�eli uwa�asz �e ilo�� ustawie� i ich opis�w jest nie odpowiednia - mo�esz zmieni� ich liczb� wybieraj�c sw�j <b>stopie� zaawansowania</b>."
				AP_MINWIDTH "350"
				, 0 , 0 , -3);
			txt = "Wybierz sw�j stopie� zaawansowania" AP_TIP "Od stopnia zaawansowania zale�y ilo�� pozycji w ustawieniach, ich opis�w i podpowiedzi." AP_ICONSIZE "32";
			txt = SetActParam(txt, AP_ICO, inttoch(ICON_SHOWBITS));
			Act[IMIG_CFG_SETTINGS].insert(IMIA_CFG_SHOWBITS , -1 , txt , ACTT_BUTTON | ACTSC_FULLWIDTH, 0, 0, 60);
	  } UIActionAdd(IMIG_CFG_SETTINGS , 0 , ACTT_GROUPEND);
      //Act[IMIG_CFG_SETTINGS].insert(IMIA_CFG_SHOWBITS , -1 , "ShowBits" , ACTT_BUTTON);
	  if (ShowBits::getLevel() < ShowBits::levelNormal) {
		UIActionCfgAddInfoBox(IMIG_CFG_SETTINGS, "Uwaga!", "Wybra�e� stopie� zaawansowania ni�szy od normalnego. Oznacza to, �e wiele opcji jest niedost�pnych. Je�eli nie mo�esz znale�� ustawienia - zmie� stopie� na wy�szy...", ICON_WARNING, -3, 32);
	  }
	  UIActionCfgAddInfoBox(IMIG_CFG_SETTINGS, "", "Wiele p�l posiada podpowiedzi - �eby je wy�wietli�, najed� na pole kursorem i chwil� poczekaj.", "file://%KonnektData%\\img\\ui_tip.png", 30);
	  UIActionCfgAddInfoBox(IMIG_CFG_SETTINGS, "", "Przyciski z sam� grafik� s�u�� najcz�ciej do wy�wietlania obszerniejszych podpowiedzi lub ostrze�e�.", "file://%KonnektData%\\img\\ui_tipbutton.png", 30);

	  if (! ShowBits::checkLevel(ShowBits::levelAdvanced)) {
		Act[IMIG_CFG_SETTINGS].insert(0 , -1 , "Tu znajdziesz pomoc", ACTT_GROUP); {
			Act[IMIG_CFG_SETTINGS].insert(IMIA_MAIN_WWW , -1 ,  ("Strona domowa" AP_ICO + inttostr(ICON_KONNEKT)).c_str(), ACTT_LINK | ACTSC_INLINE | ACTSC_BOLD);
			Act[IMIG_CFG_SETTINGS].insert(IMIA_MAIN_HELP , -1 , ("Szybka pomoc" CFGTIP "Lokalne pliki pomocy" AP_ICO + inttostr(ICON_HELP)).c_str(), ACTT_LINK | ACTSC_INLINE | ACTSC_BOLD);
			Act[IMIG_CFG_SETTINGS].insert(IMIA_MAIN_FORUM , -1 , ("Forum dyskusyjne" CFGTIP "Tutaj znajdziesz odpowied� na wi�kszo�� pyta�." AP_ICO + inttostr(ICON_INFO)).c_str(), ACTT_LINK | ACTSC_BOLD);
			Act[IMIG_CFG_SETTINGS].insert(IMIA_MAIN_DOWNLOADINFO , -1 , ("Jak pobra� dodatki i wtyczki?" AP_ICO + inttostr(ICON_URL)).c_str(), ACTT_LINK);
		}Act[IMIG_CFG_SETTINGS].insert(0 , -1 , "", ACTT_GROUPEND);
	  }


	  Act[IMIG_CFG_SETTINGS].insert(IMIG_CFG_STARTUP , -1 , "Uruchamianie" , ACTS_GROUP , ICON_POINT); {
		  Act[IMIG_CFG_STARTUP].insert(0 , -1 , "" , ACTT_GROUP);{
			Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Pokazuj ekran powitalny podczas uruchamiania" , ACTT_CHECK , CFG_UISPLASHSCREEN);
			Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Nie pokazuj g��wnego okna po uruchomieniu systemu"  , ACTT_CHECK , CFG_UIHIDDENAUTOSTART);
		  }Act[IMIG_CFG_STARTUP].insert(0 , -1 , "" , ACTT_GROUPEND);

		  Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Uruchamianie razem z systemem (autostart)" , ACTT_GROUP);{
//		  Act[IMIG_CFG_SETTINGS].insert(IMIB_CFG | CFG_UIAUTOSTART , -1 , "Nie uruchamiaj\nZawsze uruchamiaj\nTylko gdy sam nie zamkn�" , ACTT_COMBO | ACTSCOMBO_BYPOS | ACTSCOMBO_LIST | ACTSCOMBO_NOICON, 0, 200);

			if (ShowBits::checkLevel(ShowBits::levelNormal)) {
				Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Poni�sze ustawienia dotycz�:" , ACTT_COMMENT | ACTSC_BOLD);
				Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Dowolnej kopii programu" CFGTIP "Je�eli u�ywasz kilku kopii Konnekta, lub r�nych profili ich ustawienie mo�e zast�pi� tutejsze." , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE, CFG_UIAUTOSTARTAPPLIESTO);
				Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Aktualnej kopii programu" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE, CFG_UIAUTOSTARTAPPLIESTO);
				// ostatni Radio zajmuje si� zapisywaniem/wczytywaniem dlatego posiada ID
				Act[IMIG_CFG_STARTUP].insert(IMIB_CFG | CFG_UIAUTOSTARTAPPLIESTO , -1 , "Aktualnie wybranego profilu", ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST | ACTR_NODATASTORE | ACTR_GETSET, CFG_UIAUTOSTARTAPPLIESTO);
				Act[IMIG_CFG_STARTUP].insert(0 , -1 , "" , ACTT_SEPARATOR);
			}
			Act[IMIG_CFG_STARTUP].insert(IMIB_CFG | CFG_UIAUTOSTARTASKFORPROFILE , -1 , "Po uruchomieniu pytaj o profil" , ACTT_CHECK | ACTR_GETSET, CFG_UIAUTOSTARTASKFORPROFILE);
			  
			Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Nie uruchamiaj" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE, CFG_UIAUTOSTART);
			Act[IMIG_CFG_STARTUP].insert(0 , -1 , "Zawsze uruchamiaj" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE, CFG_UIAUTOSTART);
			// ostatni Radio zajmuje si� zapisywaniem/wczytywaniem dlatego posiada ID
			Act[IMIG_CFG_STARTUP].insert(IMIB_CFG | CFG_UIAUTOSTART , -1 , "Tylko gdy sam nie zamkn�" 
				CFGTIP "Je�eli podczas zamykania systemu Konnekt b�dzie wy��czony, nie uruchomi si� automatycznie nast�pnym razem." , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST | ACTR_NODATASTORE | ACTR_GETSET, CFG_UIAUTOSTART);

			if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
				Act[IMIG_CFG_STARTUP].insert(IMIA_CFG_STARTUP_CLEANUP , -1 , ("Usu� wszystkie wpisy \r\nw autostarcie" CFGTIP "W razie problem�w z uruchamianiem Konnekta po starcie systemu - u�yj tego przycisku. Zostan� usuni�te wpisy dotycz�ce uruchamiania wszystkich kopii i profili." CFGICO + inttostr(ICON_DELETE)).c_str() , ACTT_BUTTON, 0, 150, 50);
			}

		  }Act[IMIG_CFG_STARTUP].insert(0 , -1 , "" , ACTT_GROUPEND);
	  }


//      Act[IMIG_CFG_CONNECTION].cfginsert(0 , -1 , "file://res\\ui\\wnd_history.ico" , ACTT_IMAGE |ACTSC_INLINE , 0 , 0 , 0 , 48,48);
//      Act[IMIG_CFG_CONNECTION].cfginsert(0 , -1 , "res://0/63.ico" , ACTT_IMAGE , 0 , 0 , 0 , 16,16);
//      Act[IMIG_CFG_CONNECTION].cfginsert(0 , -1 , ("res://"+string(inttoch((int)Ctrl->hInst()))+"/130.bmp").c_str() , ACTT_IMAGE , 0 , 0 , 0 , 200,50);
/*      Act[IMIG_CFG_CONNECTION].insert(9000 , -1 , "Bla\nBli\nBlu" CFGTIP "Combo z Textem" , ACTT_COMBO | ACTSC_INLINE, 0 , 100); // Combo z textem
      Act[IMIG_CFG_CONNECTION].insert(9001 , -1 , "Blu"CFGICO"3\nBlaa" CFGTIP "List", ACTT_COMBO|ACTSCOMBO_LIST, 0 , 100); // Combo z wybierakiem
      Act[IMIG_CFG_CONNECTION].insert(9002 , -1 , "Ple\nPluu" CFGTIP "ByPos", ACTT_COMBO|ACTSCOMBO_LIST|ACTSCOMBO_BYPOS | ACTSC_INLINE, 0 , 100); // Combo z wybierakiem i po pozycji
      Act[IMIG_CFG_CONNECTION].insert(9003 , -1 , "Ple[10]"CFGVALUE"10\nBLE[50]"CFGVALUE"50"  CFGTIP "ByValue", ACTT_COMBO|ACTSCOMBO_LIST, 0 , 100); // Combo z wybierakiem i po p2
      Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG | 8000 , -1 , "" CFGTIP "Dynamique", ACTT_COMBO|ACTR_DROP | ACTSC_INLINE, 0 , 100); // Combo dynamiczne
      Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG | 8001 , -1 , "" , ACTT_COMBO|ACTSCOMBO_LIST|ACTR_DROP, 0 , 100); // Combo dynamiczne i z lista
      Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG | 8002 , -1 , "CzekEm" , ACTT_BUTTON, 0 , 100); // Combo dynamiczne i z lista
      Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG | 8003 , -1 , "SetEm" , ACTT_BUTTON, 0 , 100); // Combo dynamiczne i z lista

      Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "Wybierz sobie jaki� tam plik" , ACTT_FILE);
      Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "Wybierz sobie jaki� tam katalog" , ACTT_DIR);
      Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "" , ACTT_COLOR|ACTSC_INLINE, CFG_UIC_MSGTXTT);
      Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "" , ACTT_COLOR, CFG_UIC_MSGTXTF);
      Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "Przyk�ad" , ACTT_FONT, 0 , 100);
*/

      Act[IMIG_CFG_SETTINGS].insert(IMIG_CFG_CONNECTION , -1 , "Po��czenie", ACTS_GROUP , ICON_POINT);
        Act[IMIG_CFG_CONNECTION].insert(0 ,  -1 , "" , ACTT_GROUP);
            Act[IMIG_CFG_CONNECTION].insert(-1 , -1 , "��cz� si� z internetem przy u�yciu modemu" , ACTT_CHECK , CFG_DIALUP);
            Act[IMIG_CFG_CONNECTION].cfginsert(-1 , -1 , "��cz automatycznie" CFGTIP "��czy zaraz po wykryciu po��czenia", ACTT_CHECK | ACTSC_BOLD , CFG_AUTO_CONNECT , 0 , 0 , 0);
			if (ShowBits::checkLevel(ShowBits::levelNormal)) {
				Act[IMIG_CFG_CONNECTION].insert(-1 , -1 , "Automatycznie wznawiaj zerwane po��czenia" , ACTT_CHECK , CFG_RETRY);
			}
        Act[IMIG_CFG_CONNECTION].insert(0 ,  -1 , "" , ACTT_GROUPEND);
		if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
			Act[IMIG_CFG_CONNECTION].insert(0 ,  -1 , "" , ACTT_GROUP);{
				Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "Limit czasu na zestawienie po��czenia (timeout)" , ACTT_COMMENT);
				Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG , -1 , "Kr�tki\nD�ugi" AP_MINIMUM "1" AP_MAXIMUM "300" AP_STEP "60" , ACTT_SLIDER | ACTR_CONVERT , CFG_TIMEOUT);
				Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "" , ACTT_SEPARATOR);
				Act[IMIG_CFG_CONNECTION].insert(0 , -1 , "Przerwa pomi�dzy pr�bami po��cze�" , ACTT_COMMENT);
				Act[IMIG_CFG_CONNECTION].insert(IMIB_CFG , -1 , "Kr�tka\nD�uga" AP_MINIMUM "1" AP_MAXIMUM "600" AP_STEP "60" , ACTT_SLIDER | ACTR_CONVERT , CFG_TIMEOUT_RETRY);
			}Act[IMIG_CFG_CONNECTION].insert(0 ,  -1 , "" , ACTT_GROUPEND);
		}

        Act[IMIG_CFG_CONNECTION].insert(IMIG_CFG_CONNECTION_PROXY , -1 , "Proxy" , ACTS_GROUP , ICON_POINT);
		if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
			UIActionCfgAddInfoBox(IMIG_CFG_CONNECTION_PROXY, "", "W niekt�rych sieciach (np. na uczelni, lub w firmie) mo�e by� wymagane ustawienie serwera proxy. <br/>Je�eli nie jeste� pewien, mo�esz sprawdzi� w <i>Opcjach Internetowych</i> (w <i>Panelu Sterowania</i>).", ICON_INFO, -4);
		}
            Act[IMIG_CFG_CONNECTION_PROXY].insert(0 ,  -1 , "" , ACTT_GROUP);
				if (ShowBits::checkBits(ShowBits::showInfoAdvanced)) {
					Act[IMIG_CFG_CONNECTION_PROXY].insert(0, -1 , AP_TIP "Uwaga! Niekt�re wtyczki mog� nie obs�ugiwa� proxy!" AP_ICO ICONCH_WARNING, ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT);
				}
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "U�ywaj proxy" , ACTT_CHECK | ACTR_STATUS | ACTSC_BOLD, CFG_PROXY);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "U�ywaj proxy tylko do po��cze� przez http" CFGTIP "Je�eli przy w��czonym proxy nie dzia�aj� po��czenia, spr�buj odznaczy� t� opcj�." , ACTT_CHECK | ACTR_STATUS , CFG_PROXY_HTTP_ONLY);
        //      Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "Pobierz ustawienia z IE*" , ACTT_CHECK | ACTR_STATUS | ACTS_HIDDEN , CFG_PROXY_AUTO);

        //   Act[IMIG_CFG_CONNECTION_SOCKS].insert(0 , -1 , "U�ywaj proxy" , ACTS_TCHECK , CFG_SOCKS_VERSION);
        /* TODO : Mozliwosc zrobienia RadioBoxes */
                Act[IMIG_CFG_CONNECTION_PROXY].insert(0 , -1 , "Adres / port serwera" , ACTT_COMMENT , CFG_PROXY_LOGIN);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "" , ACTT_EDIT|ACTSC_INLINE , CFG_PROXY_HOST, 180);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "" CFGTIP "Najcz�ciej portem jest 8080", ACTT_EDIT|ACTSC_INT , CFG_PROXY_PORT, 50);
            Act[IMIG_CFG_CONNECTION_PROXY].insert(0 ,  -1 , "" , ACTT_GROUPEND);

            Act[IMIG_CFG_CONNECTION_PROXY].insert(0 ,  -1 , "Logowanie" , ACTT_GROUP);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "U�ywaj logowania" CFGTIP "Niekt�re (zw�aszcza szkolne i firmowe) serwery wymagaj� autentykacji. Najcz�ciej jest takie samo, jak login/has�o systemowe." , ACTT_CHECK | ACTR_STATUS , CFG_PROXY_AUTH);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(0 , -1 , "Login / has�o do serwera proxy" , ACTT_COMMENT , CFG_PROXY_LOGIN);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "" , ACTT_EDIT|ACTSC_INLINE , CFG_PROXY_LOGIN);
                Act[IMIG_CFG_CONNECTION_PROXY].insert(-1 , -1 , "" , ACTT_PASSWORD , CFG_PROXY_PASS);
            Act[IMIG_CFG_CONNECTION_PROXY].insert(0 ,  -1 , "" , ACTT_GROUPEND);


    // Uzytkownik
		Act[IMIG_CFG].insert(IMIG_CFG_USER , -1 , "U�ytkownik" , ACTS_GROUP , ICON_USER); {

			Act[IMIG_CFG_USER].insert(0 ,  -1 , "" , ACTT_GROUP); {
				CStdString txt = "Ustaw swoje dane personalne" AP_ICONSIZE "32" AP_TIP "W tym oknie mo�esz ustawi� informacje widoczne w katalogach u�ytkownik�w poszczeg�lnych sieci.";
				txt = SetActParam(txt, AP_ICO, inttostr(ICON_USER));
				Act[IMIG_CFG_USER].insert(IMIA_CNT_INFO , -1 , txt , ACTT_BUTTON | ACTSC_BOLD, 0, 200, 42);
				//Act[IMIG_CFG_USER].insert(-1 , -1 , "AutoAway po s. (0 - wy��czony)" , ACTT_COMMENT);
			}Act[IMIG_CFG_USER].insert(0 ,  -1 , "" , ACTT_GROUPEND);
			Act[IMIG_CFG_USER].insert(0 ,  -1 , "Tryb Auto-away" , ACTT_GROUP); {
				Act[IMIG_CFG_USER].insert(-1 , -1 , "Wy��czony\n15 minut" AP_PARAMS AP_STEP "60" AP_MINIMUM "0" AP_MAXIMUM "900" AP_TIP "Czas w sekundach po jakim zostanie ustawiony status \"zaraz wracam\"" , ACTT_SLIDER , CFG_AUTOAWAY);
				//Act[IMIG_CFG_USER].insert(-1 , -1 , "AutoAway po s. (0 - wy��czony)" , ACTT_COMMENT);
			}Act[IMIG_CFG_USER].insert(0 ,  -1 , "" , ACTT_GROUPEND);

			// Status opisowy
			if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
				Act[IMIG_CFG_USER].insert(IMIG_CFG_USER_STATUS , -1 , "Opisy status�w" , ACTS_GROUP , ICON_STATUSINFO);{
					if (ShowBits::checkBits(ShowBits::showInfoBeginner)) {
						UIActionCfgAddInfoBox(IMIG_CFG_USER_STATUS, ""
							, "<b>Opisy automatyczne</b> b�d� ustawiane automagicznie po wybraniu przypisanego im statusu."
							"<br/><b>Opisy r�czne</b> to te, kt�re wpiszesz sam w menu status�w wybranej sieci."
							, ICON_STATUSINFO, -4, 16);
					}
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Opisy automatyczne", ACTT_GROUP);
					//Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , , ACTT_HTMLINFO);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Po��czony" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_ONLINE);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Roz��czony" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_OFFLINE);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Zaraz wracam" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_AWAY);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Auto Away" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_AAWAY);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Nie przeszkadza�" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_DND);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Ukryty" , ACTT_COMMENT | ACTSC_INLINE, 0, 100);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_DESCR_HIDDEN);
				}Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_GROUPEND);
				//      Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_SEP);
				//      Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "R�czny" , ACTT_COMMENT | ACTSC_INLINE);
				//      Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_EDIT , 0 , CFG_DESCR);
				Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Opisy r�czne" , ACTT_GROUP);{
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Zawsze u�ywaj opis�w r�cznych (je�li s�)." AP_TIP "W przeciwnym razie, status wpisany r�cznie b�dzie ustawiany tylko gdy nie ma dla danego statusu opisu automatycznego." , ACTT_CHECK , CFG_DESCR_USEMANUAL);
					Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "Czy�� opis r�czny po zmianie statusu." AP_TIP "Po ka�dej zmianie statusu, opis wpisany r�cznie jest kasowany i u�ywane s� opisy automatyczne." , ACTT_CHECK , CFG_DESCR_CLEARMANUAL);
				}Act[IMIG_CFG_USER_STATUS].insert(0 , -1 , "" , ACTT_GROUPEND);
			}
		}

    // Wyglad

		Act[IMIG_CFG].insert(IMIG_CFG_UI , -1 , "Interfejs" , ACTS_GROUP , ICON_POINT); {
			Act[IMIG_CFG_UI].insert(0 , -1 , "G��wne okno" , ACTT_GROUP); {
				if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
					UIActionAdd(IMIG_CFG_UI , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_mainwindow.png" AP_ICONSIZE "32"
						, 0, 40, 40);
					UIActionAdd(IMIG_CFG_UI , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
						"Okno g��wne jest sercem programu - mo�esz w nim zarz�dza� swoimi kontaktami, nawi�zywa� z nimi rozmowy, dosta� si� do ustawie�, czy historii."
						, 0, 300, -3);
					//UIActionAdd(kUpdate::IMIA::gCfg , kUpdate::IMIA::showHelp , ACTT_BUTTON | ACTSC_FULLWIDTH , "Kr�tka instrukcja obs�ugi" , 0 , 0 , 25);
					UIActionAdd(IMIG_CFG_UI , 0 , ACTT_SEPARATOR);
				}
				Act[IMIG_CFG_UI].insert(0 , -1 , "Zawsze na wierzchu" , ACTT_CHECK , CFG_UIONTOP);
				if (ShowBits::checkLevel(ShowBits::levelNormal)) {
					Act[IMIG_CFG_UI].insert(0 , -1 , "Nie pokazuj okna po zwyk�ym uruchomieniu" 
						AP_TIP "Po uruchomieniu g��wne okno pozostanie ukryte. W przypadku uruchamiania razem z systemem u�ywana jest opcja znajduj�ca si� w \"Uruchamianie\"." , ACTT_CHECK , CFG_UIHIDDENSTART);
					Act[IMIG_CFG_UI].insert(0 , -1 , "Wy�wietl na pasku zada� i w oknie prza��czania program�w" , ACTT_CHECK | ACTSC_NEEDRESTART , CFG_UIMAINTASKBAR);
					Act[IMIG_CFG_UI].insert(0 , -1 , "Wy�wietlaj ma�e menu" , ACTT_CHECK, CFG_UIMENUTYPE);
				}
			}Act[IMIG_CFG_UI].insert(0 , -1 , "" , ACTT_GROUPEND);

			Act[IMIG_CFG_UI].insert(0 , -1 , "Automatyczne ukrywanie g��wnego okna" , ACTT_GROUP);{
				Act[IMIG_CFG_UI].insert(0 , -1 , "Wy��czone / szybko\nD�ugo" AP_TIP "Czas w sekundach po jakim zostanie ukryte nieaktywne okno g��wne.\r\nUstaw 0 je�eli chcesz je chowa� w�asnor�cznie." AP_MINIMUM "0" AP_STEP "10" AP_MAXIMUM "60" , ACTT_SLIDER, CFG_UIAUTOHIDE);
			}Act[IMIG_CFG_UI].insert(0 , -1 , "" , ACTT_GROUPEND);
			if (SetAlpha(0,0) && ShowBits::checkLevel(ShowBits::levelAdvanced)) {
				Act[IMIG_CFG_UI].insert(0 , -1 , "Widoczno�� g��wnego okna (przezroczysto��)" , ACTT_GROUP);{
					Act[IMIG_CFG_UI].insert(IMIB_CFG , -1 , "W��cz przezroczysto��", ACTT_CHECK , CFG_UIUSEMAINALPHA);
					Act[IMIG_CFG_UI].insert(IMIB_CFG , -1 , "10%\nWidoczne w 100%" AP_TIP "Widoczno�� w % (od 10% do 100%)\r\nUstawiaj�c na mniej ni� 100% mo�esz prze��cza� przezroczysto�� checkboxem po lewej, lub z menu w zasobniku systemowym." AP_MINIMUM "10" AP_STEP "10" AP_MAXIMUM "100" , ACTT_SLIDER , CFG_UIMAINALPHA);
				}Act[IMIG_CFG_UI].insert(0 , -1 , "" , ACTT_GROUPEND);
			}
			// --------------
			
			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_DOCK , -1 , "Dokowanie" , ACTS_GROUP | (ShowBits::checkLevel(ShowBits::levelNormal) ? 0 : ACTS_HIDDEN) , ICON_POINT);{
				Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "" , ACTT_GROUP);{
					if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
						UIActionAdd(IMIG_CFG_UI_DOCK , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_docking.png" AP_ICONSIZE "32"
							, 0, 40, 40);
						UIActionAdd(IMIG_CFG_UI_DOCK , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
							"Dokowanie polega na automatycznym ustawianiu pozycji okna g��wnego przy brzegach pulpitu tak, aby nie przeszkadza�o w trakcie pracy z innymi programami, jednocze�nie b�d�c �atwo i szybko dost�pnym."
							, 0, 300, -4);
						UIActionAdd(IMIG_CFG_UI_DOCK , 0 , ACTT_SEPARATOR);
					}

					Act[IMIG_CFG_UI_DOCK].insert(-1 , -1 , "Dokowanie w��czone" , ACTT_CHECK | ACTR_STATUS | ACTSC_BOLD, CFG_UICANDOCK);
				}Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "" , ACTT_GROUPEND);
				Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "Wybierz rodzaj dokowania" , ACTT_GROUP); {
					Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img/ui_dock.png" , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT);
					Act[IMIG_CFG_UI_DOCK].cfginsert(0 , -1 , "Zintegrowane z pulpitem"  , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE , CFG_UIDOCKHIDE, 0, 2);
					UIActionAdd(IMIG_CFG_UI_DOCK , 0 , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img/ui_dockfloat.png" , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT);
					Act[IMIG_CFG_UI_DOCK].cfginsert(-1 , -1 , "\"P�ywaj�ce\" nad pulpitem" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST , CFG_UIDOCKHIDE, 0, 2);
					if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
						Act[IMIG_CFG_UI_DOCK].cfginsert(0 , -1 , "Odst�p od brzegu." , ACTT_COMMENT);
						Act[IMIG_CFG_UI_DOCK].cfginsert(-1 , -1 , "Ma�y\nDu�y" AP_MAXIMUM "30" AP_STEP "5" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img/ui_dockspace.png" , ACTT_SLIDER , CFG_UIDOCKSPACE);
						Act[IMIG_CFG_UI_DOCK].cfginsert(0 , -1 , "Po jakim czasie ma si� pojawia� okno?" , ACTT_COMMENT);
						Act[IMIG_CFG_UI_DOCK].cfginsert(-1 , -1 , "Natychmiast\n2 sekundy" AP_MAXIMUM "2000" AP_STEP "250" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img/ui_dockrecall.png" , ACTT_SLIDER , CFG_UIDOCKWAIT);
						if (SetAlpha(0,0)) {
							Act[IMIG_CFG_UI_DOCK].cfginsert(0 , -1 , "P�przezroczysto��." , ACTT_COMMENT);
							Act[IMIG_CFG_UI_DOCK].cfginsert(-1 , -1 , "Przezroczyste\nW pe�ni widoczne" AP_MAXIMUM "100" AP_STEP "10" , ACTT_SLIDER , CFG_UIDOCKEDALPHA);
						}

						Act[IMIG_CFG_UI_DOCK].cfginsert(-1 , -1 , "Rozci�gaj okno w pionie po zadokowaniu" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img/ui_dockstretch.png" , ACTT_CHECK | ACTR_STATUS, CFG_UIDOCKSTRETCH);
					}
				}Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "" , ACTT_GROUPEND);


				Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "" , ACTT_GROUP);{
					CStdString txt = "\"Przyci�gaj\" do brzeg�w ekranu" AP_TIP "";
					if (ShowBits::checkBits(ShowBits::showTooltipsBeginner)) {
						txt = SetActParam(txt, AP_TIPIMAGEURL, "file://%KonnektData%\\img\\ui_snap.png");
					}
					Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , txt , ACTT_CHECK , CFG_UISNAP);
				}Act[IMIG_CFG_UI_DOCK].insert(0 , -1 , "" , ACTT_GROUPEND);
				if (ShowBits::checkBits(ShowBits::showInfoAdvanced)) {
					UIActionCfgAddInfoBox(IMIG_CFG_UI_DOCK, "Praca na wielu monitorach", "Je�eli pracujesz na kilku monitorach i chcesz przenie�� okno g��wne na inny, musisz <b>wy��czy�</b> dokowanie i przyci�ganie do brzeg�w!", ICON_WARNING, -2, 16);
				}
			}


			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_GROUPS , -1 , "Grupy" , ACTS_GROUP | (ShowBits::checkLevel(ShowBits::levelIntermediate) ? 0 : ACTS_HIDDEN) , ICON_GROUP);{
				Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Grupy kontakt�w" , ACTT_GROUP); {
					if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
						UIActionAdd(IMIG_CFG_UI_GROUPS , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_groups.png" AP_ICONSIZE "32"
							, 0, 40, 40);
						UIActionAdd(IMIG_CFG_UI_GROUPS , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
							"Grupy u�atwiaj� poruszanie si� po du�ej ilo�ci kontakt�w. List� mo�na podzieli� na kilka cz�ci, takich jak np: 'Znajomi' czy 'Praca'. Grupy s� przedstawione w formie zak�adek w g��wnym oknie programu."
							, 0, 300, -4);
						UIActionAdd(IMIG_CFG_UI_GROUPS , 0 , ACTT_SEPARATOR);
					} // if (ShowBits::checkBits(ShowBits::showInfoNormal))
					CStdString txt = "Edytuj list� grup" AP_ICONSIZE "32";
					txt = SetActParam(txt, AP_ICO, inttoch(ICON_GROUP));
					Act[IMIG_CFG_UI_GROUPS].insert(IMIA_MAIN_CNT_GROUPS , -1 , txt , ACTT_BUTTON | ACTSC_BOLD, 0, 170, 42);
					if (ShowBits::checkLevel(ShowBits::levelNormal)) {
						Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Zak�adki w kilku linijkach" , ACTT_CHECK , CFG_UIGRPTABS_MULTILINE);
						Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Zak�adki w pionie" CFGTIP "Niedost�pne na wXP!\nWymaga ponownego uruchomienia!" , ACTT_CHECK | (isComctl(6,0)?ACTS_HIDDEN:0) | ACTSC_NEEDRESTART , CFG_UIGRPTABS_VERTICAL);
					}	
				}Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "" , ACTT_GROUPEND);
				if (ShowBits::checkLevel(ShowBits::levelNormal)) {
					Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Zak�adka g��wna" , ACTT_GROUP); {
						Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Wy�wietlaj TYLKO kontakty nie przydzielone do �adnej grupy" , ACTT_CHECK , CFG_UIALLGROUPS_NOGROUP);
						if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
							Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_INLINE , CFG_UIALLGROUPSDESC , 65);
							Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "Opis zak�adki" , ACTT_COMMENT);
						}
					}Act[IMIG_CFG_UI_GROUPS].insert(0 , -1 , "" , ACTT_GROUPEND);
				}

			}




			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_CNT , -1 , "Lista kontakt�w" , ACTS_GROUP , ICON_POINT);{
				Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Kontakty na li�cie" , ACTT_GROUP); {
					if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
						UIActionAdd(IMIG_CFG_UI_CNT , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_contactlist.png" AP_ICONSIZE "32"
							, 0, 40, 40);
						UIActionAdd(IMIG_CFG_UI_CNT , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
							"Na li�cie kontakt�w mo�na odczyta� podstawowe informacje o naszych kontaktach, takie jak jego nazwa, aktualny status czy ewentualnie opis."
							, 0, 300, -3);
						if (ShowBits::checkLevel(ShowBits::levelNormal)) 
							UIActionAdd(IMIG_CFG_UI_CNT , 0 , ACTT_SEPARATOR);
					}
					if (ShowBits::checkLevel(ShowBits::levelNormal)) {
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Ikony statusu niezale�ne od sieci kontaktu" AP_TIP "Ikony kontakt�w wszystkich sieci s� takie same z dodatkow� ikonk� oznaczaj�c� sie�." AP_TIPIMAGEURL "file://%KonnektData%/img/ui_samecnticon.png" , ACTT_CHECK , CFG_UISAMECNTSTATUS);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Kontakty dost�pne - grub� czcionk�" , ACTT_CHECK , CFG_UIONLINEBOLD);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Animowane ikony powiadomie�" , ACTT_CHECK , CFG_UIANIMCNT);
					}
					if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
						//Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "P�aski scrollbar" , ACTT_CHECK , CFG_UILIST_FLATSB);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Buforowane wy�wietlanie" CFGTIP "Zapobieganie miganiu, za to troch� wolniejsze." , ACTT_CHECK , CFG_UICL_BUFFEREDPAINT);
					}
				}Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUPEND);

				Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Opis kontaktu na li�cie"  , ACTT_GROUP); {
					if (ShowBits::checkBits(ShowBits::showInfoAdvanced) && ShowBits::checkLevel(ShowBits::levelAdvanced)) {
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" AP_TIP "Zawarto�� opisu mo�esz zmieni� w zak�adce \"Formatowanie p�l\"" , ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT);
					}
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Wy��czone" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE | ACTSC_INLINE, CFG_UICL_INFO, 70);
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Obok nazwy (1 linijka)" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img\\ui_statusinfo1.png" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE, CFG_UICL_INFO);
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Pod nazw�" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img\\ui_statusinfo2.png" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE | ACTSC_INLINE, CFG_UICL_INFO, 70);
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "+ zawijanie wierszy" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img\\ui_statusinfo3.png" , ACTT_RADIO | ACTSRADIO_LAST | ACTSRADIO_BYPOS | (ShowBits::checkLevel(ShowBits::levelAdvanced) ? 0 : ACTS_DISABLED), CFG_UICL_INFO);
				}Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUPEND);

				if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Filtrowanie listy"  , ACTT_GROUP); {
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							UIActionAdd(IMIG_CFG_UI_CNT , 0 , ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT 
								, AP_TIPRICH "Filtrowanie s�u�y do wy�wietlania tylko tych kontakt�w, kt�re spe�niaj� wybrane przez nas kryteria, jak sie� czy dost�pno��. " 
								"Po ustaleniu kryteri�w w��czamy/wy��czamy filtrowanie jednym przyciskiem - \"Filtruj\"."
								"<br/><br/>Mo�emy odznaczy� wszystkie kryteria i zaznaczy� tylko jedno trzymaj�c wci�ni�ty klawisz [<b>Ctrl</b>]."
								"<br/>Mo�emy r�wnie� zaznaczy� wszystkie kryteria opr�cz wybranego, trzymaj�c podczas zaznaczania klawisz [<b>Shift</b>]."
								AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_filter.png" AP_ICONSIZE "16");
						}
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Ukryte" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE | ACTSC_INLINE , CFG_UIFILTERACTION, 0, 24);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Jako menu" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img\\ui_filter1.png" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTR_NODATASTORE | ACTSC_INLINE , CFG_UIFILTERACTION);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Jako toolbar" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%/img\\ui_filter2.png" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST | ACTSC_NEEDRESTART , CFG_UIFILTERACTION);
					}Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUPEND);
				}

	//      Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Automatycznie dodawaj kontakty do listy*" , ACTT_CHECK , CFG_UIAUTOADDCNT);
	//            Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Sortuj wg. daty otrzymania ostatniej wiadomo�ci*" , ACTT_CHECK , CFG_UISORTBYMSG);
				if (ShowBits::checkLevel(ShowBits::levelNormal)) {
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Oznaczanie aktywno�ci kontakt�w" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							UIActionAdd(IMIG_CFG_UI_CNT , 0 , ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT , AP_TIP "Je�eli serwer wy�le jak�kolwiek informacj� dotycz�c� kontaktu (zmiana statusu, wiadomo�� itp.) - kontakt zostaje uznany za aktywny i je�eli ma status niedost�pny, zostaje oznaczony specjaln� ikonk�. Po kilkunastu minutach dzia�ania po��czenia, funkcja pozwala z du�ym prawdopodobie�stwem oznaczy� kontakty ukryte." AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_activity.png" AP_ICONSIZE "16");
						}
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Uwzgl�dnij przy sortowaniu i poka� ikonk� aktywno�ci" , ACTT_CHECK , CFG_UISORTACTIVE, 0, 24);
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Animuj kontakty, kt�re zmeni�y status" AP_TIP "Nazwa kontaktu zmieni odcie� na kilka sekund po zmianie statusu" , ACTT_CHECK , CFG_UICNTONLINEONLIST);
					}Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUPEND);
				}
				if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
					Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUP);{
						Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "Edytuj nazw� kontaktu bezpo�rednio na li�cie" , ACTT_CHECK , CFG_UIEDITONLIST);
					}Act[IMIG_CFG_UI_CNT].insert(0 , -1 , "" , ACTT_GROUPEND);
				}

				Act[IMIG_CFG_UI_CNT].insert(IMIG_CFG_UI_CNT_IC , -1 , "Ikonki" , ACTS_GROUP , ICON_POINT); {
					Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							UIActionAdd(IMIG_CFG_UI_CNT_IC , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_contacticons.png" AP_ICONSIZE "32"
								, 0, 40, 40);
							UIActionAdd(IMIG_CFG_UI_CNT_IC , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
								"Ma�e ikonki u�atwiaj� zorientowanie si� czy do danego kontaktu mamy wpisany jego adres email, telefon oraz czy kontakt ma ustawiony status opisowy."
								, 0, 300, -3);
								UIActionAdd(IMIG_CFG_UI_CNT_IC , 0 , ACTT_SEPARATOR);
						}
						Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "W��czone" , ACTT_CHECK | ACTSC_BOLD , CFG_UICL_ICONSON);
						if (ShowBits::checkLevel(ShowBits::levelIntermediate))
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0 , -1 , "Wy�wietlane po prawej stronie listy" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_contacticons_right.png" , ACTT_CHECK ,  CFG_UICL_ICONSONRIGHT);
						if (ShowBits::checkLevel(ShowBits::levelNormal))
							Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "Odst�p wok� statusu" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_contacticons_space.png" , ACTT_CHECK , CFG_UICL_ICONSOFFSET);
					}Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "" , ACTT_GROUPEND);
					if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
						Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "Rozmieszczenie poszczeg�lnych ikonek" , ACTT_GROUP);{
							Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "Opis statusu" , ACTT_COMMENT | ACTSC_INLINE, 0, 120);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Ukryty" CFGVALUE "0" AP_RADIOGRP "info", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Z lewej" CFGVALUE "2" AP_RADIOGRP "info", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(IMIB_CFG | IMIA_CFG_UICLIP_INFO, -1 , "Z prawej" CFGVALUE "1" AP_RADIOGRP "info", ACTT_RADIO | ACTSRADIO_LAST | ACTR_CONVERT ,  CFG_UICL_ICONS);
							//Act[IMIG_CFG_UI_CNT_IC].cfginsert(IMIB_CFG | IMIA_CFG_UICLIP_INFO, -1 , "Ukryty" CFGVALUE "0\n" "Z lewej" CFGVALUE "2\n" "Z prawej" CFGVALUE "1", ACTT_COMBO | ACTSCOMBO_LIST | ACTSCOMBO_NOICON | ACTR_CONVERT ,  CFG_UICL_ICONS);

							Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "Email" , ACTT_COMMENT | ACTSC_INLINE, 0 , 120);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Ukryty" CFGVALUE "0" AP_RADIOGRP "email", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Z lewej" CFGVALUE "2" AP_RADIOGRP "email", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(IMIB_CFG | IMIA_CFG_UICLIP_EMAIL, -1 , "Z prawej" CFGVALUE "1" AP_RADIOGRP "email", ACTT_RADIO | ACTSRADIO_LAST | ACTR_CONVERT ,  CFG_UICL_ICONS);

							Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "Telefon" , ACTT_COMMENT | ACTSC_INLINE, 0 , 120);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Ukryty" CFGVALUE "0" AP_RADIOGRP "phone", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(0, -1 , "Z lewej" CFGVALUE "2" AP_RADIOGRP "phone", ACTT_RADIO | ACTSC_INLINE | ACTR_NODATASTORE ,  CFG_UICL_ICONS);
							Act[IMIG_CFG_UI_CNT_IC].cfginsert(IMIB_CFG | IMIA_CFG_UICLIP_PHONE, -1 , "Z prawej" CFGVALUE "1" AP_RADIOGRP "phone", ACTT_RADIO | ACTSRADIO_LAST | ACTR_CONVERT ,  CFG_UICL_ICONS);

						}Act[IMIG_CFG_UI_CNT_IC].insert(0 , -1 , "" , ACTT_GROUPEND);
					}
				}

				Act[IMIG_CFG_UI_CNT].insert(IMIG_CFG_UI_CNT_TIP , -1 , "Tip" , ACTS_GROUP | (ShowBits::checkLevel(ShowBits::levelIntermediate) ? 0 : ACTS_HIDDEN) , ICON_POINT);{
					Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							UIActionAdd(IMIG_CFG_UI_CNT_TIP , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_cnttip.png" AP_ICONSIZE "32"
								, 0, 40, 40);
							UIActionAdd(IMIG_CFG_UI_CNT_TIP , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
								"Tip wy�wietla podstawowe informacje o kontakcie w postaci etykiety mog�cej zawiera� takie dane jak adres email, telefon itp."
								, 0, 300, -3);
							UIActionAdd(IMIG_CFG_UI_CNT_TIP , 0 , ACTT_SEPARATOR);
						}
						Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "W��czony" , ACTT_CHECK | ACTSC_BOLD , CFG_UIINFOTIP);
						if (ShowBits::checkLevel(ShowBits::levelIntermediate))
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Zadokowany na belce pod list� kontakt�w" , ACTT_CHECK|ACTSC_NEEDRESTART, CFG_UICNTTIPDOCKED);
						if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Czas po kt�rym tip jest wy�wietlany" , ACTT_COMMENT);
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Natychmiast\n1 sekunda" AP_MINIMUM "0" AP_STEP "250" AP_MAXIMUM "1000" , ACTT_SLIDER, CFG_UITIPDELAY);
						}
					}Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "" , ACTT_GROUPEND);
					if (ShowBits::checkLevel(ShowBits::levelNormal)) {
						Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Wy�wietlane elementy" , ACTT_GROUP);{
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "U�ywaj ikonek" , ACTT_CHECK, CFG_UICNTTIPICONS);
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Nazwa kontaktu" , ACTT_CHECK, CFG_UICNTTIPHEADER);
							Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "Czas ostatniej aktywno�ci" AP_TIP "Zobacz \"Oznaczanie aktywno�ci kontakt�w\" w ustawieniach listy kontakt�w." , ACTT_CHECK , CFG_UILASTACTIVITY);
							Act[IMIG_CFG_UI_CNT_TIP].cfginsert(0 , -1 , "Numer IP" , ACTT_CHECK , CFG_UISHOWIP);
						}Act[IMIG_CFG_UI_CNT_TIP].insert(0 , -1 , "" , ACTT_GROUPEND);
					}

				}

			}


			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_NOTIFY , -1 , "Powiadomienia" , ACTS_GROUP , ICON_POINT);{
				Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Zasobnik systemowy" , ACTT_GROUP);{
					if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
						UIActionAdd(IMIG_CFG_UI_NOTIFY , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_tray.png" AP_ICONSIZE "32"
							, 0, 40, 40);
						UIActionAdd(IMIG_CFG_UI_NOTIFY , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
							"Powiadomienia w <i>zasobniku systemowym</i> (pole obok zegarka) informuj� o nadchodz�cych nowych wiadomo�ciach czy o zmianie statusu kontakt�w na naszej li�cie."
							, 0, 300, -3);
						UIActionAdd(IMIG_CFG_UI_NOTIFY , 0 , ACTT_SEPARATOR);
					}
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Powiadamiaj o kontaktach, kt�re sta�y si� dost�pne" , ACTT_CHECK , CFG_UICNTONLINENOTIFY);
					if (ShowBits::checkLevel(ShowBits::levelAdvanced))
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Powiadamiaj o nowej wiadomo�ci dop�ki jej nie przeczytam" AP_TIP "W przeciwnym wypadku powiadomienie zniknie po kilku sekundach" , ACTT_CHECK , CFG_UIMSGHOLDNOTIFY);
					if (ShowBits::checkLevel(ShowBits::levelNormal)) {
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Otwieraj powiadomienia po jednym klikni�ciu" AP_TIP "W przeciwnym wypadku, pojedyncze klikni�cie otwiera okno g��wne, a \"dwuklik\" - powiadomienie." , ACTT_CHECK , CFG_UIONECLICKTRAY);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Wy�wietlaj informacj� o statusie wszystkich sieci" , ACTT_CHECK , CFG_UITRAYTOOLTIPSHOWSTATUS);
					}
          if (ShowBits::checkLevel(ShowBits::levelIntermediate) && IMessage(IM_PLUG_NETNAME,Net::first, imtNetUID | imtProtocol)) {
						//Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Status po��czenia" , ACTT_GROUP);{
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Status po��czenia" , ACTT_SEPARATOR);
						//Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Pokazuj status po��czenia w Tray'u" CFGTIP "Wybrana zostanie pierwsza wtyczka obs�uguj�ca po��czenia." , ACTT_CHECK , CFG_UISTATUSINTRAY);
						//}Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" , ACTT_GROUPEND);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" AP_TIP "Mo�esz wybra� sie�, kt�rej status b�dzie wy�wietlany w zasobniku systemowym." , ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT);

						//Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , ("reg://IML16/" + inttostr(UIIcon(IT_STATUS, IMessageDirect(IM_PLUG_NET, Act[IMIG_STATUS][0].owner, 0, 0), 0, 0)) + ".ico").c_str() , ACTT_IMAGE | ACTSC_INLINE , 0, 16, 16);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Pierwsza sie� na belce status�w" AP_VALUE "1" AP_TIP "Kolejno�� ustalana jest wed�ug kolejno�ci �adowania wtyczek, kt�r� mo�esz zmieni� w oknie wyboru wtyczek." , ACTT_RADIO | ACTR_NODATASTORE , CFG_UISTATUSINTRAY);
						//Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , ("reg://IML16/" + inttostr(ICON_BLANK) + ".ico").c_str() , ACTT_IMAGE | ACTSC_INLINE , 0, 16, 16);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Sie�, kt�ra jako ostatnia zmieni�a sw�j status" AP_VALUE "-1" , ACTT_RADIO | ACTR_NODATASTORE , CFG_UISTATUSINTRAY);

						// kolejne sieci...
						cUIAction * lastNet = 0;
						int c = ICMessage(IMC_PLUG_COUNT);
						int found = 0;
						for (int i=1; i<c; i++) {
							oPlugin plugin = Ctrl->getPlugin((tPluginId)i);
							plugin->IMessageDirect(IM_GET_STATUS);
							if (Ctrl->getError() == errorNoResult)
								continue;
							if (lastNet) lastNet->status |= ACTSC_INLINE;
							Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , ("reg://IML16/" + inttostr(UIIcon(IT_LOGO, plugin->getNet(), 0, 0)) + ".ico").c_str() , ACTT_IMAGE | ACTSC_INLINE , 0, 16, 16);
							String txt = plugin->getNetName();
							txt = SetActParam(txt, AP_VALUE, inttoch(plugin->getNet()));
							lastNet = Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , txt.a_str(), ACTT_RADIO | ACTR_NODATASTORE , CFG_UISTATUSINTRAY);
							if (++found % 3 == 0) lastNet = 0; // �eby wskoczy� do nowej linijki...
						}

						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , ("reg://IML16/" + inttostr(IDI_TRAY) + ".ico").c_str() , ACTT_IMAGE | ACTSC_INLINE , 0, 16, 16);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Nie pokazuj" AP_VALUE "0" , ACTT_RADIO | ACTSRADIO_LAST , CFG_UISTATUSINTRAY);
					}
				}Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" , ACTT_GROUPEND);
				if (ShowBits::checkLevel(ShowBits::levelNormal)) {
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Animacja ikon" , ACTT_GROUP);{
					//Act[IMIG_CFG_UI].insert(0 , -1 , "Ikonka w Tray'u*" , ACTT_CHECK , CFG_UITRAY);
						Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Szybko\nWolno" AP_MINIMUM "10" AP_MAXIMUM "1000" AP_STEP "100"
							AP_TIP "Odst�py w milisekundach pomi�dzy klatkami/migni�ciami ikon powiadomie�." , ACTT_SLIDER , CFG_UIANIM);
					}Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" , ACTT_GROUPEND);
				}
				if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Powiadamianie o nowej wiadomo�ci w oknie rozmowy" , ACTT_GROUP);
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" AP_MINIMUM "0" AP_MAXIMUM "100" , ACTT_SPINNER|ACTSC_INLINE , CFG_UIMSGFLASH , 50);
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "Migaj oknem po nadej�ciu wiadomo�ci # razy" , ACTT_COMMENT);
					Act[IMIG_CFG_UI_NOTIFY].insert(0 , -1 , "" , ACTT_GROUPEND);
				}

			}


			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_MSG , -1 , "Wiadomo�ci" , ACTS_GROUP , UIIcon(IT_MESSAGE, 0, Message::typeMessage, 0));{
				Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Okno rozmowy" , ACTT_GROUP);{
					if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
						UIActionAdd(IMIG_CFG_UI_MSG , 0 , ACTT_TIPBUTTON | ACTSC_INLINE , AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_msgwindow.png" AP_ICONSIZE "32"
							, 0, 40, 40);
						UIActionAdd(IMIG_CFG_UI_MSG , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
							"Jak sama nazwa wskazuje, okno rozmowy s�u�y do rozmawiania :) Dodatkowo mo�esz bezpo�rednio z niego wys�a� np. obrazek, lub dosta� si� do historii rozm�w."
							, 0, 300, -3);
						if (ShowBits::checkLevel(ShowBits::levelIntermediate))
							UIActionAdd(IMIG_CFG_UI_MSG , 0 , ACTT_SEPARATOR);
					}
					if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Zapami�tuj zawarto�� okna po jego zamkni�ciu" AP_TIP "Je�eli podczas zamykania okna przytrzymasz klawisz [SHIFT] chwilowo odwr�cisz dzia�anie tego ustawienia." , ACTT_CHECK , CFG_UIREMEMBERMSGWND);
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Informuj w oknie rozmowy gdy kontakt zmieni status" , ACTT_CHECK , CFG_UIMSGSHOWSTATUS);
					}
					if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Automatycznie kopiuj tekst w oknie po zaznaczeniu" AP_TIP "Funkcjonalno�� dobrze znana np. z programu mIRC." , ACTT_CHECK , CFG_UIMSGVIEW_COPY);
					}
				}Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "" , ACTT_GROUPEND);

				if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
					Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Automatyczne otwieranie okien po nadej�ciu wiadomo�ci" , ACTT_GROUP);{
						Act[IMIG_CFG_UI_MSG].cfginsert(0 , -1 , 
							"Wy��czone" , ACTT_RADIO | ACTSC_INLINE | ACTSRADIO_BYPOS | ACTR_NODATASTORE , CFG_UIMSGPOPUP);
						Act[IMIG_CFG_UI_MSG].cfginsert(0 , -1 , 
							"Zminimalizowane" AP_TIP "Okno wiadomo�ci zostanie otwarte zminimalizowane w tle." , ACTT_RADIO | ACTSC_INLINE | ACTSRADIO_BYPOS | ACTR_NODATASTORE , CFG_UIMSGPOPUP);
						Act[IMIG_CFG_UI_MSG].cfginsert(0 , -1 , 
							"W tle" AP_TIP "Okno wiadomo�ci zostanie otwarte w tle (bez prze��czania aktywnego okna)." , ACTT_RADIO | ACTSC_INLINE | ACTSRADIO_BYPOS | ACTR_NODATASTORE , CFG_UIMSGPOPUP);
						Act[IMIG_CFG_UI_MSG].cfginsert(0 , -1 , 
							"Na wierzchu" AP_TIP "Okno wiadomo�ci \"wyskoczy\" na wierzch i automatycznie ustawi si� jako aktywne." , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST , CFG_UIMSGPOPUP);
					}Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "" , ACTT_GROUPEND);
				} 
				if (ShowBits::checkLevel(ShowBits::levelNormal)) {
					Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Historia ostatnio wpisanych wiadomo�ci" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal))
							Act[IMIG_CFG_UI_MSG].insert(0 , -1 , AP_TIP "Naciskaj�c w oknie wpisywania wiadomo�ci klawisze strza�ek [g�ra]/[d�] mo�esz przywo�ywa� poprzednio wys�ane wiadomo�ci." , ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT);
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Wy��czona" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSC_INLINE | ACTR_NODATASTORE , CFG_UIMESSAGEHISTORY, 0, 24);
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Z [Ctrl]" AP_TIP "Naciskaj�c strza�ki musisz trzyma� wci�ni�ty klawisz [Ctrl]." , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSC_INLINE | ACTR_NODATASTORE , CFG_UIMESSAGEHISTORY, 0, 24);
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "W��czona" , ACTT_RADIO | ACTSRADIO_BYPOS | ACTSRADIO_LAST , CFG_UIMESSAGEHISTORY, 0, 24);
					}Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "" , ACTT_GROUPEND);
				}
				Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Pisanie i czytanie" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Wysy�aj wiadomo�� po naci�ni�ciu [Enter]" , ACTT_CHECK , CFG_UIMSGBYENTER);
				}Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "" , ACTT_GROUPEND);
				if (ShowBits::checkLevel(ShowBits::levelIntermediate)) {
					Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Potwierdzanie dostarczenia" , ACTT_GROUP);{
						Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Informuj o niedostarczeniu" , ACTT_CHECK , CFG_ACK_SHOWFAILED);
						if (ShowBits::checkLevel(ShowBits::levelAdvanced)) {
							Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "Informuj o zapisaniu w kolejce na serwerze" , ACTT_CHECK , CFG_ACK_SHOWQUEUED);
						}
					}Act[IMIG_CFG_UI_MSG].insert(0 , -1 , "" , ACTT_GROUPEND);
				}

		
				Act[IMIG_CFG_UI_MSG].insert(IMIG_CFG_UI_MSG_NOTINLIST, -1 , "Spoza listy" , ACTS_GROUP | (ShowBits::checkLevel(ShowBits::levelNormal) ? 0 : ACTS_HIDDEN) , ICON_POINT);{
					Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							UIActionAdd(IMIG_CFG_UI_MSG_NOTINLIST , 0 , ACTT_HTMLINFO | ACTSC_FULLWIDTH , 
								"Tutaj mo�na zmieni� zachowanie programu w przypadku otrzymania wiadomo�ci od osoby nie znajduj�cej si� na naszej li�cie kontakt�w.<br/>"
								"Je�eli <b>odznaczymy</b> pole '<i>Przyjmuj wiadomo�ci od os�b spoza listy</i>', mo�na wprowadzi� tekst wiadomo�ci kt�ra zostanie wys�ana <b>automatycznie</b> do kontaktu spoza listy. W tej wiadomo�ci mo�na zawrze� '<i>has�o</i>', kt�rym osoba musi odpowiedzie� �eby si� z nami skontaktowa�. '<i>Has�o</i>' nale�y wpisa� w polu '<i>Dodaj kontakt do listy je�eli przy�le has�o</i>'. Je�eli w naszej automatycznie wysy�anej wiadomo�ci nie b�dzie zawarta informacja o ha�le, osoby spoza listy <b>nie b�da mog�y si� z nami skontaktowa�!<b>"
								, 0, 400, -8);
							UIActionAdd(IMIG_CFG_UI_MSG_NOTINLIST , 0 , ACTT_SEPARATOR);
						}
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(IMIB_CFG , -1 , "Przyjmuj wiadomo�ci od os�b spoza listy" , ACTT_CHECK|ACTR_STATUS|ACTSC_BOLD , CFG_UIMSGFROMOTHER);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_GROUPEND);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(IMIB_CFG|IMIA_CFG_UIM_MSG_NIL_REPLY , -1 , "Na nieprzyj�te wiadomo�ci odpowiedz:" , ACTT_GROUP );
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_TEXT , CFG_UIMSGFROMOTHERREPLY);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_GROUPEND);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].cfginsert(IMIB_CFG|IMIA_CFG_UIM_MSG_NIL_PASS , -1 , "Dodaj kontakt do listy je�li przy�le 'has�o':" , ACTT_GROUP, 0, 0, 3);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , AP_ICO ICONCH_WARNING AP_TIP "Rozm�wca musi wpisa� has�o jako jedyn� tre�� w wiadomo�ci! W przeciwnym razie has�o nie zostanie rozpoznane!" , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT);
						Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_EDIT|ACTSC_FULLWIDTH , CFG_UIMSGFROMOTHERPASS);
					}Act[IMIG_CFG_UI_MSG_NOTINLIST].insert(0 , -1 , "" , ACTT_GROUPEND);

				}
			}	

			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_APPRNC , -1 , "Wygl�d" , ACTS_GROUP , ICON_POINT);
				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "Okno wiadomo�ci" , ACTT_GROUP);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Okno" , ACTT_FONT, CFG_UIF_MSG);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Kontakt" , ACTT_FONT | ACTSFONT_NOBGCOLOR, CFG_UIF_MSGCNT);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Wysy�ane" , ACTT_FONT, CFG_UIF_MSGSEND);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Odbierane" , ACTT_FONT | ACTSFONT_NOBGCOLOR, CFG_UIF_MSGRCV);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Info" , ACTT_FONT | ACTSFONT_NOBGCOLOR, CFG_UIF_MSGINFO);
				Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Podkre�lone" , ACTT_FONT | ACTSFONT_NOBGCOLOR, CFG_UIF_MSGMARK);
				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "" , ACTT_GROUPEND);
				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "Lista kontakt�w" , ACTT_GROUP); {
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Kontakt" , ACTT_FONT | ACTR_CHECK | ACTR_SHOW, CFG_UIF_CLIST);
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Zaznaczony" , ACTT_FONT | ACTSFONT_NOFACE | ACTSFONT_NOSIZE , CFG_UIF_CLISTSEL);
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Opis" , ACTT_FONT, CFG_UIF_CLISTINFO);
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "TIP" , ACTT_FONT, CFG_UICNTTIPFONT);
				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "" , ACTT_GROUPEND);}

				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "Menu" , ACTT_GROUP); {
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Pozycja" , ACTT_FONT | ACTSC_INLINE, CFG_UIF_MENU);
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Domy�lny" , ACTT_FONT | ACTSC_INLINE , CFG_UIF_MENUDEFAULT);
					Act[IMIG_CFG_UI_APPRNC].insert(IMIB_CFG , -1 , "Zaznaczony" , ACTT_FONT, CFG_UIF_MENUACTIVE);
				Act[IMIG_CFG_UI_APPRNC].insert(0 , -1 , "" , ACTT_GROUPEND);}

			Act[IMIG_CFG_UI].insert(IMIG_CFG_UI_FORMAT , -1 , "Formatowanie p�l" , ACTS_GROUP | (ShowBits::checkLevel(ShowBits::levelAdvanced) ? 0 : ACTS_HIDDEN) , ICON_POINT); {
				if (ShowBits::checkBits(ShowBits::showInfoAdvanced)) {
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUP);{
						if (ShowBits::checkBits(ShowBits::showInfoNormal)) {
							Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , 
								"Niekt�re pola tekstowe w interfejsie - jak tytu�y okien, b�d� elementy listy kontakt�w - zawieraj� informacje o kontakcie. "
								"Ustawiaj�c formatowanie mo�esz wybra�, kt�re informacje Ciebie interesuj� i w jaki spos�b maj� by� przedstawiane."
								, ACTT_HTMLINFO, 0, 400, -3);
							Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_SEPARATOR);
						}
						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , 
							"Zawarto�� sk�ada si� z <i>tekstu</i> i <i>zmiennych</i>. Zmienne podajemy w postaci - {<i>dodatek</i><b>nazwa_zmiennej</b><i>dodatek</i>} - <i>dodatek</i> to dowolne znaki nie alfanumeryczne, kt�re pojawi� si� tylko wtedy, gdy warto�� zmiennej nie b�dzie pusta."
							, ACTT_HTMLINFO, 0, 0, -4);
						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Jako nazw� zmiennej mo�esz poda�:", ACTT_SEPARATOR);

						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , 
							"Przyk�ad" AP_TIPRICH_WIDTH "350" AP_TIPRICH
							"Ustawiamy zawarto��:"
							"<br/>  <b>{Name }{\"Nick\" }{Surname }{[status]}</b>"
							"<br/>dla kontaktu:"
							"<br/>  imi�=<b>Jan</b>, nazwisko=<b>Kowalski</b>, status=<b>Dost�pny</b>, <b>bez</b> ksywki,"
							"<br/>sformatowana nazwa b�dzie mia�a posta�:"
							"<br/>  <b>Jan Kowalski [Dost�pny]</b> <span class=\"note\">(poniewa� kontakt nie ma \"ksywki\" (pole <i>Nick</i>) <i>dodatki</i> '<b>\"</b>' i '<b>\" </b>' nie s� wy�wietlane...)</span>"
							, ACTT_TIPBUTTON | ACTSBUTTON_ALIGNRIGHT, 0, 120, 30);

						CStdString txt = "Identyfikator" AP_TIPRICH_WIDTH "300" AP_TIPRICH "Jeden z identyfikator�w p�l w tablicy kontakt�w:<br/><br/>";

						int pos = 0;
						bool first = true;
						while (Ctrl->DTgetID(DTCNT, pos) != -1) {
							const char * name = Ctrl->DTgetName(DTCNT, pos);
							if (name && *name) {
								if (!first) txt+=", ";
								first = false;
								txt += "<b>";
								txt += name;
								txt += "</b>";
							}
							pos++;
						}
						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , txt
							, ACTT_TIPBUTTON | ACTSC_INLINE, 0, 120, 30);
//						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "lub"
//							, ACTT_COMMENT | ACTSC_INLINE);
						Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Nazw� specjaln�" AP_TIPRICH_WIDTH "300" AP_TIPRICH
							"<b>version</b> (wersja programu), <b>profile</b> (aktywny profil), <b>status</b> (nazwa statusu kontaktu), <b>info</b> (status opisowy)"
							, ACTT_TIPBUTTON, 0, 120, 30);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
				}
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Tytu� okna g��wnego" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_UIMAINTITLE);
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Tytu� okna wiadomo�ci" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , CFG_UIMSGTITLE);
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Podpowied� w zasobniku systemowym (tray)" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Zwyk�a" , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , AP_TIPRICH "Mo�esz u�y� prostego formatowania HTML." , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH , CFG_UITRAYTITLE, 0, -2);
					Act[IMIG_CFG_UI_FORMAT].cfginsert(0 , -1 , "Z oczekuj�c� wiadomo�ci�." , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , AP_TIPRICH "Dodatkowe zmienne dla oczekuj�cej wiadomo�ci: <b>eventTitle</b> (tytu� akcji), <b>eventMsg</b> (skr�t ew. oczekuj�cej wiadomo�ci)" , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH , CFG_UITRAYTITLEEVENT, 0, -2);
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Lista kontakt�w" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Opis kontaktu na li�cie" , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH , CFG_UICL_INFO_FORMAT);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Nazwa kontaktu na li�cie - zostanie wy�wietlona pierwsza niepusta linijka." , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" CFGTIP "Gdy zostawisz to pole puste zostanie wy�wietlony {Display},{UID}" , ACTT_TEXT , CFG_UICL_DISPLAY_FORMAT);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Dodatkowe informacje w baloniku (tip)" , ACTT_SEPARATOR);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_TEXT , CFG_UICNTTIPINFO);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Pokazuj r�wnie� domy�lne pola balonika" CFGTIP "Takie jak imi�/nazwisko, telefon, status, itd..." , ACTT_CHECK , CFG_UICNTTIP_SHOWDEFAULT);
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "Propozycje domy�lnie wy�wietlanej nazwy w oknie \"Wi�cej\"" , ACTT_GROUP);{
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , AP_TIPRICH "Puste pole oznacza domy�lne formatowanie. Poprawnie dzia�aj� tylko bezpo�rednie identyfikatory p�l z tablicy!" AP_ICO ICONCH_WARNING , ACTT_TIPBUTTON | ACTSC_INLINE | ACTSBUTTON_ALIGNRIGHT, 0, 0, 50);
					Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_TEXT , CFG_UICNT_CREATEDISPLAY_FORMAT, 0, 50);
				Act[IMIG_CFG_UI_FORMAT].insert(0 , -1 , "" , ACTT_GROUPEND);}
			}
		}
                
                
		Act[IMIG_CFG].insert(IMIG_CFG_PLUGS , -1 , "Wtyczki" , ACTS_GROUP , ICON_PLUGIN);
	  Act[IMIG_CFG_PLUGS].insert(0 , -1 , "" , ACTT_GROUP);{
            Act[IMIG_CFG_PLUGS].insert(0 , -1 , "W tej zak�adce znajdziesz ustawienia wtyczek." , ACTT_INFO);
			Act[IMIG_CFG_PLUGS].insert(0 , -1 , "" , ACTT_SEPARATOR);
			Act[IMIG_CFG_PLUGS].insert(IMIA_MAIN_OPTIONS_PLUG , -1 , "Wybierz wtyczki" AP_IMGURL "res://ui/plugin.ico" AP_ICONSIZE "32" , ACTT_BUTTON | ACTSC_BOLD, 0, 170, 42);
	  }Act[IMIG_CFG_PLUGS].insert(0 , -1 , "" , ACTT_GROUPEND);
        Act[IMIG_CFG_PLUGS].insert(0 , -1 , "Wybierz miejsce dla menu wtyczek" , ACTT_GROUP);
		Act[IMIG_CFG_PLUGS].insert(0 , -1 , "Menu" AP_VALUE "15" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_plugbar1.png" , ACTT_RADIO | ACTR_NODATASTORE , CFG_UIPLUGINSGROUP);
		Act[IMIG_CFG_PLUGS].insert(0 , -1 , "Toolbar" AP_VALUE "65551" AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_plugbar2.png"  , ACTT_RADIO | ACTR_NODATASTORE , CFG_UIPLUGINSGROUP);
		Act[IMIG_CFG_PLUGS].insert(IMIB_CFG , -1 , "G��wny toolbar" AP_VALUE "8"  AP_TIP "" AP_TIPIMAGEURL "file://%KonnektData%\\img\\ui_plugbar3.png"  , ACTT_RADIO | ACTSRADIO_LAST | ACTSC_NEEDRESTART , CFG_UIPLUGINSGROUP);
        //Act[IMIG_CFG_PLUGS].insert(0 , -1 , "Wybierz miejsce dla menu wtyczek" , ACTT_COMMENT);
        Act[IMIG_CFG_PLUGS].insert(0 , -1 , "" , ACTT_GROUPEND);

	// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // Info o kontakcie

      Act[IMIG_NFO_BAR].insert(IMIG_NFO_TB , -1 , "" , ACTS_GROUP | ACTSTB_DARROWS | ACTSTB_LIST /*| ACTSBAR_FULL*/);
	  Act[IMIG_NFO_TB].insert(IMIG_NFO_SAVE , -1 , "Zapisz" , ACTS_GROUP , IDI_NFO_SAVE);
		    Act[IMIG_NFO_SAVE].insert(IMIA_NFO_SAVE_ALL , -1 , "Zapisz wsz�dzie" , ACTSMENU_BOLD , IDI_NFO_SAVE);
			Act[IMIG_NFO_SAVE].insert(IMIA_NFO_SAVE_LOCAL , -1 , "Zapisz lokalnie" , 0 , 0);
        Act[IMIG_NFO_TB].insert(IMIA_NFO_CANCEL , -1 , "Anuluj" , 0 , IDI_NFO_CANCEL);
        Act[IMIG_NFO_TB].insert(0 , -1 , "" , ACTT_SEP);
        Act[IMIG_NFO_TB].insert(IMIG_NFO_REFRESH , -1 , "Od�wie�" , ACTS_GROUP , IDI_NFO_REFRESH);
			Act[IMIG_NFO_REFRESH].insert(IMIG_NFO_REFRESH , -1 , "Od�wie� domy�lnym" , ACTSMENU_BOLD , IDI_NFO_REFRESH);
        Act[IMIG_NFO_TB].insert(IMIA_NFO_ADDTOLIST , -1 , "Dodaj do listy" , ACTR_INIT , UIIcon(IT_LOGO , 0 , 0 , 0));

      Act[IMIG_NFO].insert(IMIG_NFO_SUMMARY , -1 , "Podsumowanie" , ACTS_GROUP , ICON_POINT);
        Act[IMIG_NFO_SUMMARY].insert(0 , -1 , "" , ACTT_GROUP);
          Act[IMIG_NFO_SUMMARY].insert(IMIA_NFO_SUM , -1 , "" , ACTT_HTMLINFO , 0 , 0 , 170);
        Act[IMIG_NFO_SUMMARY].insert(0 , -1 , "" , ACTT_GROUPEND);

      Act[IMIG_NFO].insert(IMIG_NFO_DETAILS , -1 , "Dane osobowe" , ACTS_GROUP , ICON_POINT);
        Act[IMIG_NFO_DETAILS].insert(IMIB_CNT|IMIA_NFO_DETAILS_NET , -1 , "Sie� i UID kontaktu" , ACTT_GROUP|ACTR_INIT);
          // Tworzymy list� sieci
         {string lista="";
          int c = IMessage(IMC_PLUG_COUNT);
          for (int i=0;i<c;i++) {
			  oPlugin plugin = Ctrl->getPlugin((tPluginId)i);
              
			  if (plugin->getType() & imtNet) {
          if (plugin->getNetName().empty()) continue;

				  lista += plugin->getNetName();
				  lista += CFGICO + string(inttoch(UIIcon(2, plugin->getNet() ,0,0)));
				  lista += CFGVALUE + string(inttoch(plugin->getNet()));
				  lista += '\n';
              }
          }
          Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , lista.c_str() , ACTT_COMBO|ACTSCOMBO_LIST | ACTSC_INLINE | ACTR_SHOW , Contact::colNet);
		  Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" CFGTIP "Identyfikator w sieci." , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colUid | 0x10000000);
         }
        Act[IMIG_NFO_DETAILS].insert(0 , -1 , "" , ACTT_GROUPEND);

		Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Wy�wietl jako" , ACTT_GROUP);{
  			Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" CFGTIP "Nazwa do wy�wietlenia", ACTT_COMBO|ACTSC_INLINE|ACTR_INIT|ACTSCOMBO_NOICON , Contact::colDisplay);
			Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" CFGTIP "Grupa do kt�rej ma nale�e� kontakt.", ACTT_COMBO|ACTSCOMBO_LIST|ACTR_INIT|ACTSCOMBO_NOICON , Contact::colGroup);
		}Act[IMIG_NFO_DETAILS].insert(0 , -1 , "" , ACTT_GROUPEND);

		Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Dane" , ACTT_GROUP);{
			Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Imi�" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
			Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colName);
			Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Imiona" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
      Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colMiddleName);
			Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Nazwisko" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
			Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colSurname);
			Act[IMIG_NFO_DETAILS].insert(0 , -1 , "Ksywka" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
			Act[IMIG_NFO_DETAILS].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colNick);
		} Act[IMIG_NFO_DETAILS].insert(0 , -1 , "" , ACTT_GROUPEND);
		Act[IMIG_NFO_DETAILS].insert(IMIA_NFO_NOTONLIST , -1 , "Usu� kontakt po zamkni�ciu programu" CFGTIP "Kontakt uznawany jest jako spoza listy", ACTT_CHECK | ACTR_INIT);

		Act[IMIG_NFO].insert(IMIG_NFO_CONTACT , -1 , "Kontakt" , ACTS_GROUP , ICON_POINT); 
		{
			Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Email" , ACTT_GROUP);{
		        Act[IMIG_NFO_CONTACT].insert(0 , -1 , "G��wny" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
				Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colMail);
		        Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Dodatkowe" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_TEXT , Contact::colMailMore , 0 , 32);
			}Act[IMIG_NFO_CONTACT].insert(0 , -1 , "" , ACTT_GROUPEND);
			Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Telefon" , ACTT_GROUP); {
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Kom�rka" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
				Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT  | ACTSC_FULLWIDTH, Contact::colCellPhone);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Stacjonarny" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colPhone);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Fax" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colFax);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Dodatkowe" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_TEXT , Contact::colPhoneMore , 0 , 32);
			}Act[IMIG_NFO_CONTACT].insert(0 , -1 , "" , ACTT_GROUPEND);
			Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Adres" , ACTT_GROUP);{
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Nazwa" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_TEXT , Contact::colAddressMore , 0 , 32);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Ulica" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colStreet);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Skr. pocztowa" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colPoBox);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Miejscowo��" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colLocality);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Kod pocztowy" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colPostalCode);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Region/Wojew�dztwo" , ACTT_COMMENT | ACTSC_INLINE);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colRegion);
				Act[IMIG_NFO_CONTACT].insert(0 , -1 , "Kraj" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_CONTACT].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colCountry);

			}Act[IMIG_NFO_CONTACT].insert(0 , -1 , "" , ACTT_GROUPEND);
		}


		Act[IMIG_NFO].insert(IMIG_NFO_WORK , -1 , "Praca" , ACTS_GROUP , ICON_POINT); 
		{
			Act[IMIG_NFO_WORK].insert(0 , -1 , "Informacje" , ACTT_GROUP);{
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "Organizacja" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkOrganization);
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "Departament" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkOrgUnit);
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "Stanowisko" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkTitle);
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "Funkcja" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkRole);
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "Strona WWW" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkUrl);
			}Act[IMIG_NFO_WORK].insert(0 , -1 , "" , ACTT_GROUPEND);
			Act[IMIG_NFO_WORK].insert(0 , -1 , "Kontakt" , ACTT_GROUP); {
		        Act[IMIG_NFO_WORK].insert(0 , -1 , "E-Mail" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
            Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkMail);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Telefon" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkPhone);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Fax" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkFax);
			}Act[IMIG_NFO_WORK].insert(0 , -1 , "" , ACTT_GROUPEND);
			Act[IMIG_NFO_WORK].insert(0 , -1 , "Adres" , ACTT_GROUP);{
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Nazwa" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_TEXT , Contact::colWorkAdressMore , 0 , 32);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Ulica" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkStreet);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Skr. Pocztowa" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkPoBox);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Miejscowo��" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkLocality);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Kod pocztowy" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkPostalCode);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Region/Wojew�dztwo" , ACTT_COMMENT | ACTSC_INLINE);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkRegion);
				Act[IMIG_NFO_WORK].insert(0 , -1 , "Kraj" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colWorkCountry);
			}Act[IMIG_NFO_WORK].insert(0 , -1 , "" , ACTT_GROUPEND);
			Act[IMIG_NFO_WORK].insert(0 , -1 , "Wi�cej..." , ACTT_GROUP);{
        Act[IMIG_NFO_WORK].insert(IMIB_CNT , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH , Contact::colWorkMore);
			}Act[IMIG_NFO_WORK].insert(0 , -1 , "" , ACTT_GROUPEND);
		} // WORK


      Act[IMIG_NFO].insert(IMIG_NFO_INFO , -1 , "Wi�cej" , ACTS_GROUP , ICON_POINT);
	  {
		  Act[IMIG_NFO_INFO].insert(0 , -1 , "" , ACTT_GROUP);{
			Act[IMIG_NFO_INFO].insert(0 , -1 , "Strona WWW" , ACTT_COMMENT|ACTSC_INLINE, 0, 75);
      Act[IMIG_NFO_INFO].insert(IMIB_CNT , -1 , "" , ACTT_EDIT | ACTSC_FULLWIDTH , Contact::colUrl);
			Act[IMIG_NFO_INFO].insert(0 , -1 , "P�e�" , ACTT_COMMENT|ACTSC_INLINE, 0, 75);
			Act[IMIG_NFO_INFO].insert(IMIB_CNT , -1 , "Nieznana\nKobieta\nM�czyzna" , ACTT_COMBO|ACTSCOMBO_LIST|ACTSCOMBO_BYPOS|ACTSCOMBO_NOICON , Contact::colGender);
			Act[IMIG_NFO_INFO].insert(0 , -1 , "Data urodzenia" , ACTT_COMMENT | ACTSC_INLINE, 0, 75);
			Act[IMIG_NFO_INFO].insert(IMIB_CNT , -1 , "dd-MM-yyyy" , ACTT_TIME|ACTSTIME_SHOWNONE|ACTR_CONVERT , Contact::colBorn);
		  }Act[IMIG_NFO_INFO].insert(0 , -1 , "" , ACTT_GROUPEND);
		  Act[IMIG_NFO_INFO].insert(0 , -1 , "Opis w�asny" , ACTT_GROUP);{
			  Act[IMIG_NFO_INFO].insert(IMIB_CNT , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH | ACTR_INIT , Contact::colDescription);
		  }Act[IMIG_NFO_INFO].insert(0 , -1 , "" , ACTT_GROUPEND);
		  Act[IMIG_NFO_INFO].insert(0 , -1 , "Notatki" , ACTT_GROUP);{
        Act[IMIG_NFO_INFO].insert(IMIB_CNT , -1 , "" , ACTT_TEXT | ACTSC_FULLWIDTH , Contact::colInfo);
		  }Act[IMIG_NFO_INFO].insert(0 , -1 , "" , ACTT_GROUPEND);
	  }
   // TESTOWE
/*
   Act[IMIG_BAR].insert(2000 , -1 , "Test BAR" , ACTT_HWND);
   Act[IMIG_MAINTB].insert(2000 , -1 , "Test MAINTB" , ACTT_HWND);
   Act[IMIG_CFG_SETTINGS].insert(2000 , -1 , "Test CFGSETTINGS" , ACTT_HWND);
*/
/*   if (IMessage(IMC_ISDEBUG)) {
     Act[IMIG_MAINTB].insert(1024 , -1 , "Wiadomo��" , ACTS_GROUP , UIIcon(5,0,1,0));
     Act[1024].insert(1026 , -1 , "Druga wiadomo��" , 0 , UIIcon(5,0,1,0));
     Act[1024].insert(1025 , -1 , "Od systemu" , 0 , UIIcon(5,0,1,0));
     Act[1024].insert(1027 , -1 , "CzekStatus");
   }
*/

		Konnekt::UI::CntList::filters.Prepare();

 }

void registerActionsAfter() {
    Act[IMIG_EVENT_PARENT].move(Act[IMIG_EVENT_PARENT].find(IMIG_EVENT),-1);
    int pos = Act[IMIG_TRAY].find(IMIA_TRAY_STATUS);
    for (int i=0; i<Act[IMIG_STATUS].size()-1; i++) {
        Act[IMIG_TRAY].Act.insert(Act[IMIG_TRAY].Act.begin()+pos , &Act[IMIG_STATUS][i]);
    }
	// Ukrywamy nie potrzebne menu...
	int plugins = ICMessage(IMI_GETPLUGINSGROUP);
	if (Act[plugins].size()==0) {
		sUIActionInfo ai;
		ai.mask = UIAIM_STATUS;
		ai.statusMask = ACTS_HIDDEN;
		ai.status = ACTS_HIDDEN;
		Act[plugins].setInfo(ai);
		ActionStatus(sUIAction(0 , ICMessage(IMI_GETPLUGINSGROUP)));
	}
}

void unregisterActions() {
    int pos = Act[IMIG_TRAY].find(IMIA_TRAY_STATUS);
    int count = Act[IMIG_STATUS].size() - 1;
    if (count > 0) {
        Act[IMIG_TRAY].Act.erase(
            Act[IMIG_TRAY].Act.begin() + pos - count
            , Act[IMIG_TRAY].Act.begin() + pos);
    }

}