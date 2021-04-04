ticketCheck()
{
//	int i, countFirst, ncount;
//	char ParamName[100];
//	countFirst = 0;
	
	web_reg_save_param_ex(
	    "ParamName=firstCoast", 
	    "LB/IC=Total Charge: $ ",
	    "RB/IC= ",
	    "Ordinal=all");

	web_reg_find(
		"Text=A First class",
         "SaveCount=FirstClass_count", 
         LAST);
//	web_reg_save_param_ex(
//		"ParamName=firstClassTicket",
//		"LB=A ",
//		"RB= class ticket",
//		"Ordinal=all",
//		SEARCH_FILTERS,
//			"Scope=BODY",
////			"ContentType=First",
//		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t7.inf", 
		LAST);
	
//    ncount = atoi(lr_eval_string("{firstClassTicket_count}"));
//
//    for (i = 1; i <= ncount; i++)
//       {
//    		sprintf(ParamName, "{firstClassTicket_%d}", i);
//
//       		lr_output_message("Value of %s: %s", ParamName, lr_eval_string(ParamName));
//       		if (strcmp(lr_eval_string(ParamName),"First") == 0) {
//       			++countFirst;
//       		}
//       }	
    
	lr_output_message("Цена первого билета: %s $", lr_eval_string("{firstCoast_1}"));
	lr_output_message("Количество билотов первого класса: %s", lr_eval_string("{FirstClass_count}"));

	return 0;
}
