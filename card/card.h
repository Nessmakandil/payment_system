#ifndef CARD_H
#define CARD_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef enum month 
{
    Jan = 01,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
} month;
typedef struct date
{
    month mon;
    unsigned int year;
} date;
typedef struct card
{
    char *name;
    size_t PAN;
    date *Date;
} card;

char *getCardHolderName(card *user);
date getCardExpiryDate(card *user);
int getCardPAN(card *user);
#endif