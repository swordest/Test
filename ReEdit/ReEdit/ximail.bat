@echo Imail Filter
date 08/8/2
net stop queuemgr
net stop smtpd32
taskkill /f /im queuemgr.exe
taskkill /f /im smtpd32.exe
net start queuemgr
net start smtpd32
ping 166.111.90.1
date 12/3/8