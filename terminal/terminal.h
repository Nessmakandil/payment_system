#ifndef TERMINAL_H
#define TERMINAL_H
#include "../card/card.h"
#include <time.h>
#define maxTrans 50000

typedef short int int4_t;
date getTransactionDate(void);
int4_t isCardExpried(card *user);
size_t getTransactionAmount(card *user);
int4_t isBelowMaxAmount(card *user);
size_t setMaxAmount(card *user);
#endif