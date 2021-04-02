Action1()
{

	web_url("webtours", 
		"URL=http://localhost:1080/webtours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_custom_request("actions", 
		"URL=https://nav.smartscreen.microsoft.com/api/browser/edge/actions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"config\":{\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"unknown\"},\"pua\":null},\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"unknown\"}}},\"identity\":{\"caller\":{\"locale\":\"ru-RU\",\"name\":\"anaheim\",\"process\":null,\"version\":\"89.0.774.63 (Official build) \"},\"client\":{\"data\":{\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\""
		"2.0-2f9188b68640dbf72295f9083a21d674a314721ef06f82db281cbcb052ff8ec1\",\"synchronousLookupUris\":\"637522495562096544\",\"topTraffic\":\"637480914991619069\"},\"version\":\"281479403536385\"},\"device\":{\"architecture\":9,\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"cloudSku\":false,\"customId\":null,\"enterprise\":null,\"family\":3,\"id\":null,\"locale\":\"ru-RU\",\"netJoinStatus\":2,\"onlineIdTicket\":\"t=GwAmAd9tBAAUCqvYdtHJRIwInP+r5YPm2nbkkcAOZgAAEPMK/"
		"C2Z7VDXExSFTIfUqT7wAOdL0rHuFbpnCDEvEBIDap26xRA5sMc/Axq5E7uNLDQLYDeKjdIpg5HyMQyIDSI+AkpAvlG1ZLse7NGO8g4uyciQKWqnwuvnZAiRVOhhUBH2v/XnQWdVRYSf0MWLKeZfsnXlixp8bE7DA4aN8Ut5daK5XYqVzIqnJYqT1EogVsdAFVKruHSFSM7WpXB4gYp9tmhQAsJlLUh9NjqBTizu3tzHnVhMg/hB5BY8mM9EkmqGWwpYRAgs5e2om33Z+ubkF7WkTowYrQp+1E++Hj6DSdLo2P5daMK2rQ+PHvtwaXHTrrkgacZq0ICNWJHG0aDogh0B&p=\",\"osVersion\":\"10.0.19042.867.vb_release\"},\"user\":{\"locale\":\"ru-RU\"}},\"systemSettings\":{\"battery\":null,\"network\":null}}", 
		LAST);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131010.565168084zHDiiffpQtfiDDDDtAtDDpVDfzHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=04/03/2021", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=04/04/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=61", ENDITEM, 
		"Name=findFlights.y", "Value=4", ENDITEM, 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=DC0A7EAE119942EF9324293D8EE820D1&dmnchg=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=25FA6C9B11E964EE2F7B6347108265BB; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20190603; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANGV2=ru; DOMAIN=c.urs.microsoft.com");

	lr_think_time(13);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;04/03/2021", ENDITEM, 
		"Name=returnFlight", "Value=000;0;04/04/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=28", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		EXTRARES, 
		"Url=https://c.urs.microsoft.com/l1.dat?cw=637529088473578758&v=3&cv=9.11.19041.0&os=10.0.19042.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=000;0;04/03/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=000;0;04/04/2021", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=18", ENDITEM, 
		"Name=buyFlights.y", "Value=16", ENDITEM, 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=DC0A7EAE119942EF9324293D8EE820D1&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=25FA6C9B11E964EE2F7B6347108265BB; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20190603; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANGV2=ru; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml?cvlp=5359568756325679554", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}