#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    char year[5];
    struct tm *timeinfo;

    time(&t);    
    timeinfo = localtime(&t);      
    
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    strftime(year, sizeof(year), "%Y", timeinfo);
    printf("\nThis program has been written in the year: %s\n", year);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}