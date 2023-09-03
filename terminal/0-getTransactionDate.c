
#include "terminal.h"
date getTransactionDate(void)
{
    time_t t;    
    char year[5];
    char month[3];
    struct tm *timeinfo;
    date myDate;
    
    time(&t);    
    timeinfo = localtime(&t); 
    strftime(year, sizeof(year), "%Y", timeinfo);
    strftime(month, sizeof(month), "%m", timeinfo);
    myDate.mon = atoi(month);
    myDate.year = atoi(year);

    return (myDate); 
}