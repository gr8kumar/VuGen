Action()
{

	lr_start_transaction("1_transaction");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("CONSENT=YES+IN.en+20171126-09-0; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7rynBQWaryapCfXAz_UcQFSdt435MNcyxIy82ysBp6OD1g3Kay9QOF1vuaQmXUfGoQae8ObNaGgcAFGkfyiP-HMR_6D953vK5fWHpI6MTmQx6ipNUKAVBygyovHS0XYnMdYSb9UetfW3Q1e3bz8mvXFzL9gfo8KB1ihmY4rJ-i5-t0Iq2n7gTuF7_Eai4yEpGI9ESA_8cZlUF7sSWuMo-9lYXUfA; DOMAIN=accounts.google.com");

	web_add_cookie("SMSV=ADHTe-CP-_bia1FdOlK6ueVwauNhXbT0uh_HnEnDxDZGkEVFBYlYc3UebBDAUPBBOoQT0sHukDC8jiH1_i2-Xi_l4q8Qq-OSQGpY6pOmEq6z3WISdMj925M; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI448B; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUnCQW8s1h7UqtPjRCsZdzvr7GjxE0uPLB7KzIGR0T6fYl326M4F1cL0mmwj; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=_SVI_Ch9RejZfaHpTWDQzVVN3TEM4U1VQdkI1YVZudjRESmhjEM7Yoc3_2OkCGBAiP01BRURIZl9xTWVaUTVZR2phYkNhRlNyX05OeHZPa2wtdkp1cXFKVW0tbS13SFN1VjFkc2I5WnZ1NnZpV0VTSQ_:26512560:9347; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=mXFihPo9vz6Kp1pZtbcgSuR-hU5GsoSWNghNWt5b5K2VAbbVGgVbuKwc2_nYQ4Ew-0KhdSTr0554IUf1dLWLbxynvrrVgdiAOGA6MpiVh0p8HVZx-zK9j33ngxKZSi5HeSoLAs2ueFLC2MFdw6WXsHPRExrjVuchTLvx6573fCCioETTyjqgWdlKr8hxdNOIot9QoZLHEzlG_4tg3JUMaGkjDg; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:DABLxzLWCyZ9y6whlv50yCtFja3qaX6qrqwUgmI6wPkS4mOiAU9-sVQ3xMgUjv8OqkNgy2lDJ5gznY4jDgZGQp3b3AOoHRzUUwPx-a_ti-H95w:pX9KxNf5Wdv_G_o6; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:DABLxzLWCyZ9y6whlv50yCtFja3qaX6qrqwUgmI6wPkS4mOiAU9-sVQ3xMgUjv8OqkNgy2lDJ5gznY4jDgZGQp3b3AOoHRzUUwPx-a_ti-H95w:pX9KxNf5Wdv_G_o6; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-06-02-06; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("s_vi=[CS]v1|2DF6D4CD852A06BA-400001032000E176[CE]; DOMAIN=sstats.adobe.com");

	web_add_cookie("WRUIDAWS=2002651235467449; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_D6FAAFAD54CA9F560A4C98A5%40AdobeOrg=1406116232%7CMCMID%7C59018362632675716643302412042003381847%7CMCAAMLH-1546029334%7C3%7CMCAAMB-1546029334%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1545431734s%7CNONE%7CvVersion%7C2.5.0; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_8F99160E571FC0427F000101%40AdobeOrg=1406116232%7CMCAID%7C2DF6D4CD852A06BA-400001032000E176%7CMCIDTS%7C18150%7CMCMID%7C65013847432003856572741144562496570366%7CMCAAMLH-1542907317%7C3%7CMCAAMB-1568135956%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1542309717s%7CNONE%7CvVersion%7C2.5.0; DOMAIN=sstats.adobe.com");

	web_add_cookie("_cs_c=1; DOMAIN=sstats.adobe.com");

	web_add_cookie("__CT_Data=gpv=9&ckp=tld&dm=adobe.com&apv_100_www20=9&cpv_100_www20=8&rpv_100_www20=8; DOMAIN=sstats.adobe.com");

	web_add_cookie("ctm={'pgv':7738688223663040|'vst':8993996240438131|'vstr':151572345484639|'intr':1568136864133|'v':1|'lvst':287412}; DOMAIN=sstats.adobe.com");

	web_add_cookie("AAMC_adobe_0=REGION%7C6; DOMAIN=sstats.adobe.com");

	web_add_cookie("_fbp=fb.1.1586416344357.1937475074; DOMAIN=sstats.adobe.com");

	web_add_cookie("adcloud={%22_les_v%22:%22y%2Cadobe.com%2C1586418144%22}; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_nr=1587370097617-Repeat; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=1075005958%7CMCIDTS%7C18150%7CMCMID%7C65512833947085844752799509467564429724%7CMCAAMLH-1587974898%7C6%7CMCAAMB-1587974898%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1587377298s%7CNONE%7CMCAID%7C2DF6D4CD852A06BA-400001032000E176%7CvVersion%7C4.4.1%7CMCCIDH%7C-800413374; DOMAIN=sstats.adobe.com");

	web_add_cookie("mbox=PC#1b03427a4bd746d780306247e92f5570.37_0#1650614903|session#b577d5dd228544fc8fca2f5004175c63#1587371958; DOMAIN=sstats.adobe.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("AMCV_8E391C8B533058250A490D4D%40AdobeOrg=281789898%7CMCIDTS%7C18416%7CvVersion%7C4.1.0; DOMAIN=www.myuhc.com");

	web_add_cookie("dtPC=480441627_1h2; DOMAIN=www.myuhc.com");

	web_add_cookie("check=true; DOMAIN=www.myuhc.com");

	web_add_cookie("mbox=session#e7b89aab91904d43b4645bb0fc774250#1591082316; DOMAIN=www.myuhc.com");

	web_url("prewelcome.do", 
		"URL=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s21806491467246?AQB=1&ndh=1&pf=1&t=2%2F5%2F2020%2012%3A17%3A4%202%20-330&fid=0A20F272179E219E-1E769922E7908C55&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.1.5&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s28923599903795?AQB=1&ndh=1&pf=1&t=2%2F5%2F2020%2012%3A17%3A4%202%20-330&fid=0A20F272179E219E-1E769922E7908C55&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.1.5&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=themes/html/portal/en/prelogin/fonts/UHCSans-SemiBold.woff", "Referer=https://www.myuhc.com/member/themes/html/portal/en/prelogin/prelogin.css", ENDITEM, 
		"Url=themes/html/portal/en/prelogin/fonts/UHCSans-Regular.woff", "Referer=https://www.myuhc.com/member/themes/html/portal/en/prelogin/prelogin.css", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=480441627_1h1; DOMAIN=www.myuhc.com");

	web_add_cookie("dtSa=-; DOMAIN=www.myuhc.com");

	web_add_cookie("dtLatC=9343; DOMAIN=www.myuhc.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.myuhc.com");

	web_custom_request("dynaTraceMonitor", 
		"URL=https://www.myuhc.com/member/dynaTraceMonitor?type=js&session=B3DF9A6AC31883ED45D3C1C8B4D628B1%7CbXlVSEN8MQ&flavor=post&referer=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&modifiedSince=1585332593548&app=myUHC", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1591080419468%7C0%7C-1$PV=1$rId=RID_1210300915$rpId=-505481301$url=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den$title=myuhc%20-%20Member%20Login%20%7C%20UnitedHealthcare$latC=9343$app=myUHC$fId=480441627_1$v=10177191119102908$time=1591080447088$cs=-16272432", 
		EXTRARES, 
		"Url=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/mbox-contents-1e2a841771842742bdabbf0f863482c9e351d19a.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		"Url=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5c78cf6764746d2e250020e5.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("logout", 
		"URL=https://api.member.uhc.com/rest/user/v1/session/logout", 
		"Resource=0", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("satellite-5d6633f264746d7476000970.html", 
		"URL=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("satellite-5d7f98d764746d48050001fc.html", 
		"URL=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d7f98d764746d48050001fc.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://connect.facebook.net/en_US/fbevents.js", ENDITEM, 
		"Url=https://connect.facebook.net/signals/config/1231592023559249?v=2.9.18&r=stable", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=1231592023559249&ev=PageView&dl=https%3A%2F%2Fassets.adobedtm.com%2Fbff7f95d5e60a9bb1bafa9115ce25108c698418f%2Fscripts%2Fsatellite-5d7f98d764746d48050001fc.html&rl=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&if=true&ts=1591080470738&sw=1366&sh=768&v=2.9.18&r=stable&ec=0&o=28&it=1591080470301&coo=false&rqm=GET", ENDITEM, 
		LAST);

	web_url("satellite-5dcbb7e264746d1de1000c92.html", 
		"URL=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5dcbb7e264746d1de1000c92.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.googletagmanager.com/gtag/js?id=AW-801664645", ENDITEM, 
		"Url=https://www.googleadservices.com/pagead/conversion_async.js", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.myuhc.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.1.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_verify=1&d_orgid=8E391C8B533058250A490D4D%40AdobeOrg&d_nsid=0&ts=1591080452018", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		EXTRARES, 
		"Url=https://www.myuhc.com/member/themes/html/portal/images/prelogin/desk.jpg", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	web_add_cookie("dtSa=-; DOMAIN=prd.myuhc.com");

	web_add_cookie("dtLatC=9343; DOMAIN=prd.myuhc.com");

	web_add_cookie("AMCV_8E391C8B533058250A490D4D%40AdobeOrg=281789898%7CMCIDTS%7C18416%7CvVersion%7C4.1.0; DOMAIN=prd.myuhc.com");

	web_add_cookie("dtPC=480441627_1h2; DOMAIN=prd.myuhc.com");

	web_add_cookie("check=true; DOMAIN=prd.myuhc.com");

	web_add_cookie("mbox=session#e7b89aab91904d43b4645bb0fc774250#1591082316; DOMAIN=prd.myuhc.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout_2", 
		"URL=https://prd.myuhc.com/apps/myuhc/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://bat.bing.com/bat.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		"Url=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/s-code-contents-204eb6f41a16512e2cec480a1e4365a68a6e0559.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	web_add_cookie("dtPC=480441627_1h3; DOMAIN=www.myuhc.com");

	web_add_cookie("dtCookie=B3DF9A6AC31883ED45D3C1C8B4D628B1|bXlVSEN8MQ; DOMAIN=www.myuhc.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.myuhc.com");

	web_custom_request("dynaTraceMonitor_2", 
		"URL=https://www.myuhc.com/member/dynaTraceMonitor?type=js&session=B3DF9A6AC31883ED45D3C1C8B4D628B1%7CbXlVSEN8MQ&flavor=post&referer=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&modifiedSince=1585332593548&app=myUHC", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1591080419468%7C0%7C-1%2C2%7C2%7Cx%7Cxhr%7Cx%7C1591080452020%7C0%7C-1%7C-%7C-%7C%2F%2Funitedhealthgroup.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dunitedhealthgroup%26sessionId%3De7b89aab91904d43b4645bb0fc774250%26version%3D2.1.0%2C2%7C3%7Cx%7Cxhr%7Cx%7C1591080462555%7C0%7C-1%7C-%7C-%7C%2F%2Funitedhealthgroup.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dunitedhealthgroup%26sessionId%3De7b89aab91904d43b4645bb0fc774250%26version%3D2.1.0$PV=1$rId="
		"RID_1210300915$rpId=-505481301$url=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den$title=myuhc%20-%20Member%20Login%20%7C%20UnitedHealthcare$latC=9343$app=myUHC$fId=480441627_1$v=10177191119102908$time=1591080462580$cs=-114719549", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://unitedhealthgroup.demdex.net/dest5.html?d_nsid=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.myuhc.com");

	web_custom_request("delivery", 
		"URL=https://unitedhealthgroup.tt.omtrdc.net/rest/v1/delivery?client=unitedhealthgroup&sessionId=e7b89aab91904d43b4645bb0fc774250&version=2.1.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"requestId\":\"2dc5ecf45f604dc7a725a004e8b33808\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36\",\"timeOffsetInMinutes\":330,\"channel\":\"web\",\"screen\":{\"width\":1366,\"height\":768,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":1},\"window\":{\"width\":1349,\"height\":625},\"browser\":{\"host\":\"www.myuhc.com\",\"webGLRenderer\":\"Google SwiftShader\"},\"address\":{\""
		"url\":\"https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en\",\"referringUrl\":\"\"}},\"property\":{\"token\":\"1bc4e4b4-29bd-9e51-aa24-d8230033881b\"},\"experienceCloud\":{\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"273256FD554F9713-0903CD2518CB5DDA\",\"trackingServer\":\"metrics.optum.com\",\"trackingServerSecure\":\"smetrics.optum.com\"}},\"execute\":{\"pageLoad\":{}},\"prefetch\":{\"views\":[{}]}}", 
		EXTRARES, 
		"Url=https://universal.iperceptions.com/wrapper.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=28088867&Ver=2&mid=5e3bec77-7998-3af6-1f19-94951a954fc9&sid=04ded512-3435-9e0d-df9c-87607298d98c&pi=1200101525&lg=en-IN&sw=1366&sh=768&sc=24&tl=myuhc%20-%20Member%20Login%20%7C%20UnitedHealthcare&p=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&r=&lt=36490&evt=pageLoad&msclkid=N&sv=1&rn=433562", 
		"Resource=0", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("activityi;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506", 
		"URL=https://8584968.fls.doubleclick.net/activityi;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506?", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://d2oh4tlt9mrke9.cloudfront.net/Record/js/sessioncam.recorder.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		"Url=https://dpm.demdex.net/ibs_dpid=411&dpuuid=XtX2LAAAAZcQDRBm", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		"Url=https://ws.sessioncam.com/Record/config.aspx?url=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&jsver=562&originalUrl=https://www.myuhc.com&sse=1591080470558&inTg=a&acr=false", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	web_add_cookie("AMCVS_8E391C8B533058250A490D4D%40AdobeOrg=1; DOMAIN=www.myuhc.com");

	web_add_cookie("_uetsid=04ded512-3435-9e0d-df9c-87607298d98c; DOMAIN=www.myuhc.com");

	web_add_cookie("vv_cid=%5B%5BB%5D%5D; DOMAIN=www.myuhc.com");

	web_add_cookie("tp=1889; DOMAIN=www.myuhc.com");

	web_add_cookie("s_ppv=uhc%253Amyuhc%253Ahome%253Aredesign%253Ahome%2C33%2C33%2C625; DOMAIN=www.myuhc.com");

	web_add_cookie("s_cc=true; DOMAIN=www.myuhc.com");

	web_add_cookie("sc.InTg=a; DOMAIN=www.myuhc.com");

	web_add_cookie("dtPC=480441627_1h7; DOMAIN=www.myuhc.com");

	web_add_cookie("AMCV_8E391C8B533058250A490D4D%40AdobeOrg=281789898%7CMCIDTS%7C18416%7CMCMID%7C81527447337606718093346851812150558273%7CMCAAMLH-1591685264%7C12%7CMCAAMB-1591685264%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1591087669s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18423%7CvVersion%7C4.1.0; DOMAIN=www.myuhc.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.myuhc.com");

	web_custom_request("dynaTraceMonitor_3", 
		"URL=https://www.myuhc.com/member/dynaTraceMonitor?type=js&session=B3DF9A6AC31883ED45D3C1C8B4D628B1%7CbXlVSEN8MXxNeVVIQzJ8MQ&flavor=post&referer=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den&modifiedSince=1585332593548&app=myUHC", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1591080419468%7C0%7C-1%2C2%7C2%7Cx%7Cxhr%7Cx%7C1591080452020%7C1591080469717%7C238%7C-%7C-%7C%2F%2Funitedhealthgroup.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dunitedhealthgroup%26sessionId%3De7b89aab91904d43b4645bb0fc774250%26version%3D2.1.0%7C-%7C-%7C-%7C12604%7C17590%2C3%7C4%7Cx%7Cxhr%7Cx%7C1591080464823%7C1591080469717%7C238%7C-%7C-%7Chttps%3A%2F%2Fsmetrics.optum.com%2Fid%3Fd_visid_ver%3D4.1.0%26d_fieldgroup%3DA%26mcorgid%3D8E391C8B533058250A490D4D%2540AdobeO"
		"rg%26mid%3D81527447337606718093346851812150558273%26ts%3D1591080464823%7C-%7C-%7C-%7C4893%7C4894%2C4%7C5%7C972%7C_rC_%7C-%7C1591080469644%7C1591080469644%7C-1%2C4%7C6%7CXHR%20Timeout%7C_rM_%7C-%7C1591080469644%7C1591080469644%7C-1%2C2%7C3%7Cx%7Cxhr%7Cx%7C1591080462555%7C1591080469644%7C236%7C-%7C-%7C%2F%2Funitedhealthgroup.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dunitedhealthgroup%26sessionId%3De7b89aab91904d43b4645bb0fc774250%26version%3D2.1.0%7C-%7C-%7C-%7C7088%7C7088%2C2%7C7%7Cx%7Cxhr%7C"
		"x%7C1591080470716%7C0%7C-1%7C-%7C-%7Chttps%3A%2F%2Fws.sessioncam.com%2FRecord%2Fconfig.aspx%3Furl%3Dhttps%253A%252F%252Fwww.myuhc.com%252Fmember%252Fprewelcome.do%253FcurrentLanguageFromPreCheck%253Den%26jsver%3D562%26originalUrl%3Dhttps%3A%2F%2Fwww.myuhc.com%26sse%3D1591080470558%26inTg%3Da%26acr%3Dfalse$PV=1$rId=RID_1210300915$rpId=-505481301$url=https%3A%2F%2Fwww.myuhc.com%2Fmember%2Fprewelcome.do%3FcurrentLanguageFromPreCheck%3Den$title=myuhc%20-%20Member%20Login%20%7C%20UnitedHealthcare$latC="
		"9343$app=myUHC$fId=480441627_1$v=10177191119102908$time=1591080475901$cs=1526423878", 
		EXTRARES, 
		"Url=https://www.facebook.com/tr/?id=1231592023559249&ev=LPG_E%26I_myuhc%20Home%20Page%20-%20Site%20Visit&dl=https%3A%2F%2F8584968.fls.doubleclick.net%2Fddm%2Ffls%2Fr%2Fdc_pre%3DCJnWp9zE4ukCFUdzYAod9KQDhw%3Bsrc%3D8584968%3Btype%3Deiutv0%3Bcat%3Dlpg_e05w%3Bdc_lat%3D%3Bdc_rdid%3D%3Btag_for_child_directed_treatment%3D%3Btfua%3D%3Bnpa%3D%3Bord%3D9713139015667.506%3B~oref%3Dhttps%3A%2F%2Fassets.adobedtm.com%2Fbff7f95d5e60a9bb1bafa9115ce25108c698418f%2Fscripts%2Fsatellite-5d6633f264746d7476000970.html&rl"
		"=https%3A%2F%2Fadservice.google.com%2Fddm%2Ffls%2Fi%2Fdc_pre%3DCJnWp9zE4ukCFUdzYAod9KQDhw%3Bsrc%3D8584968%3Btype%3Deiutv0%3Bcat%3Dlpg_e05w%3Bdc_lat%3D%3Bdc_rdid%3D%3Btag_for_child_directed_treatment%3D%3Btfua%3D%3Bnpa%3D%3Bord%3D9713139015667.506%3B~oref%3Dhttps%3A%2F%2Fassets.adobedtm.com%2Fbff7f95d5e60a9bb1bafa9115ce25108c698418f%2Fscripts%2Fsatellite-5d6633f264746d7476000970.html&if=true&ts=1591080479907&sw=1366&sh=768&v=2.9.18&r=stable&ec=0&o=28&it=1591080479415&coo=false&rqm=GET", "Referer=https://"
		"8584968.fls.doubleclick.net/ddm/fls/r/dc_pre=CJnWp9zE4ukCFUdzYAod9KQDhw;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506;~oref=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", ENDITEM, 
		"Url=https://ext-inv-cdn.presage.io/pv/img.gif?url=myuhc.com", "Referer=https://8584968.fls.doubleclick.net/ddm/fls/r/dc_pre=CJnWp9zE4ukCFUdzYAod9KQDhw;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506;~oref=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", ENDITEM, 
		"Url=https://secure.adnxs.com/bounce?%2Fpx%3Fid%3D1174148%26seg%3D19522860%26t%3D1", "Referer=https://8584968.fls.doubleclick.net/ddm/fls/r/dc_pre=CJnWp9zE4ukCFUdzYAod9KQDhw;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506;~oref=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=1231592023559249&ev=myuhc%20Home%20Page%20-%20Site%20Visit&dl=https%3A%2F%2F8584968.fls.doubleclick.net%2Fddm%2Ffls%2Fr%2Fdc_pre%3DCJnWp9zE4ukCFUdzYAod9KQDhw%3Bsrc%3D8584968%3Btype%3Deiutv0%3Bcat%3Dlpg_e05w%3Bdc_lat%3D%3Bdc_rdid%3D%3Btag_for_child_directed_treatment%3D%3Btfua%3D%3Bnpa%3D%3Bord%3D9713139015667.506%3B~oref%3Dhttps%3A%2F%2Fassets.adobedtm.com%2Fbff7f95d5e60a9bb1bafa9115ce25108c698418f%2Fscripts%2Fsatellite-5d6633f264746d7476000970.html&rl="
		"https%3A%2F%2Fadservice.google.com%2Fddm%2Ffls%2Fi%2Fdc_pre%3DCJnWp9zE4ukCFUdzYAod9KQDhw%3Bsrc%3D8584968%3Btype%3Deiutv0%3Bcat%3Dlpg_e05w%3Bdc_lat%3D%3Bdc_rdid%3D%3Btag_for_child_directed_treatment%3D%3Btfua%3D%3Bnpa%3D%3Bord%3D9713139015667.506%3B~oref%3Dhttps%3A%2F%2Fassets.adobedtm.com%2Fbff7f95d5e60a9bb1bafa9115ce25108c698418f%2Fscripts%2Fsatellite-5d6633f264746d7476000970.html&if=true&ts=1591080480742&sw=1366&sh=768&v=2.9.18&r=stable&ec=1&o=28&it=1591080479415&coo=false&rqm=GET", "Referer=https://"
		"8584968.fls.doubleclick.net/ddm/fls/r/dc_pre=CJnWp9zE4ukCFUdzYAod9KQDhw;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506;~oref=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("pxl", 
		"URL=https://insight.adsrvr.org/track/pxl/?adv=vrwywxs&ct=0:amp83jq&fmt=3", 
		"Resource=0", 
		"Referer=https://8584968.fls.doubleclick.net/ddm/fls/r/dc_pre=CJnWp9zE4ukCFUdzYAod9KQDhw;src=8584968;type=eiutv0;cat=lpg_e05w;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=;npa=;ord=9713139015667.506;~oref=https://assets.adobedtm.com/bff7f95d5e60a9bb1bafa9115ce25108c698418f/scripts/satellite-5d6633f264746d7476000970.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("iFrame.html", 
		"URL=https://universal.iperceptions.com/iFrame.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"securitytoken");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_auto_header("Origin", 
		"https://www.myuhc.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(7);

	web_custom_request("InviteTriggers", 
		"URL=https://api.iperceptions.com/InviteTriggers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SecurityToken", 
		"ef6177e6-a195-4fc1-9b32-7636466e19b5");

	web_url("InviteTriggers_2", 
		"URL=https://api.iperceptions.com/InviteTriggers", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://universal.iperceptions.com/core/IpEngine_v77.4.js", "Referer=https://www.myuhc.com/member/prewelcome.do?currentLanguageFromPreCheck=en", ENDITEM, 
		LAST);

	return 0;
}