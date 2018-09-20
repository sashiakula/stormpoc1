//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_LoadingCheck()
{
	truclient_step("1", "Function LoadCheck", "snapshot=LoadingCheck_1.inf");
	{
		truclient_step("1.1", "For ( var i = 0 ; i < 2 ; i++ )", "snapshot=LoadingCheck_1.1.inf");
		{
			truclient_step("1.1.1", "Get Visible Text from All Assignments label", "snapshot=LoadingCheck_1.1.1.inf");
			truclient_step("1.1.2", "Evaluate JavaScript code if(textValue=='Loading')  {  i=0;  }", "snapshot=LoadingCheck_1.1.2.inf");
		}
	}
	truclient_step("2", "Function ThinkTime", "snapshot=LoadingCheck_2.inf");
	{
		truclient_step("2.1", "Wait thinktime seconds", "snapshot=LoadingCheck_2.1.inf");
	}

	return 0;
}
