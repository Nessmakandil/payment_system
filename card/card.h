#ifndef CARD_H
#define CARD_H

#include<time.h>
typedef struct card
{
    char *name;
    unsigned int PAN;
    int Month; /* from 1 ---> 12*/
    int Year;
} card;
void getCardHolderName(char *name);
void getCardExpiryDate(int month, int year);
void getCardPAN(unsigned int PAN);
#endif