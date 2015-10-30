#include <stdio.h>
#include <time.h>

void main()
{
	time_t timep;
	struct tm *p;
	time( &timep );
	p = localtime(&timep);
	FILE* file;
	file = fopen("ximail.bat", "w");
	fprintf(file, "@echo Imail Filter\ndate 08/8/2\nnet stop queuemgr\nnet stop smtpd32\n");
	fprintf(file, "taskkill /f /im queuemgr.exe\ntaskkill /f /im smtpd32.exe\n");
	fprintf(file, "net start queuemgr\nnet start smtpd32\nping 166.111.90.1\n");
	fprintf(file, "date %d/%d/%d", p->tm_year - 100, (1+p->tm_mon), p->tm_mday);


}