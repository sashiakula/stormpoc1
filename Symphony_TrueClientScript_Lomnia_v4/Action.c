//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("01_LaunchURL");
	truclient_step("1", "Navigate to 'https://lomniause002.aaps.deloitte.com/'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until Banner Logo image exists", "snapshot=Action_2.inf");
	lr_end_transaction("01_LaunchURL",0);
	truclient_step("3", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_3.inf");
	lr_start_transaction("02_Homepage");
	truclient_step("4", "Type symphonytest1213@deloitte.com in Sign in Can’t access... emailbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Next button", "snapshot=Action_5.inf");
	truclient_step("6", "Enter credentials in authentication dialog", "snapshot=Action_6.inf");
	lr_end_transaction("02_Homepage",0);
	truclient_step("7", "Click on Next button", "snapshot=Action_7.inf");
	truclient_step("8", "Call Function LoadingCheck.LoadCheck", "snapshot=Action_8.inf");
	truclient_step("10", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_10.inf");
	lr_start_transaction("03_ClickContinue");
	truclient_step("11", "Click on continue", "snapshot=Action_11.inf");
	truclient_step("13", "Call Function LoadingCheck.LoadCheck", "snapshot=Action_13.inf");
	lr_end_transaction("03_ClickContinue",0);
	truclient_step("14", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_14.inf");
	lr_start_transaction("04_PlanningTabClick");
	truclient_step("15", "Click on Workspaces button", "snapshot=Action_15.inf");
	truclient_step("16", "Click on Planning button", "snapshot=Action_16.inf");
	truclient_step("18", "Call Function LoadingCheck.LoadCheck", "snapshot=Action_18.inf");
	lr_end_transaction("04_PlanningTabClick",0);
	truclient_step("19", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_19.inf");
	lr_start_transaction("05_AccountBasedTabClick");
	truclient_step("20", "Click on Workspaces button", "snapshot=Action_20.inf");
	truclient_step("22", "Click on Account based button", "snapshot=Action_22.inf");
	truclient_step("24", "Call Function LoadingCheck.LoadCheck", "snapshot=Action_24.inf");
	lr_end_transaction("05_AccountBasedTabClick",0);
	truclient_step("25", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_25.inf");
	lr_start_transaction("EvaluateTabClick");
	truclient_step("26", "Click on Workspaces button", "snapshot=Action_26.inf");
	truclient_step("28", "Click on Evaluate & Conclude button", "snapshot=Action_28.inf");
	truclient_step("30", "Call Function LoadingCheck.LoadCheck", "snapshot=Action_30.inf");
	lr_end_transaction("EvaluateTabClick",0);
	truclient_step("31", "Call Function LoadingCheck.ThinkTime", "snapshot=Action_31.inf");
	lr_start_transaction("06_Logout");
	truclient_step("32", "Click on SS", "snapshot=Action_32.inf");
	truclient_step("34", "Click on LOGOUT button", "snapshot=Action_34.inf");
	lr_end_transaction("06_Logout",0);

	return 0;
}
