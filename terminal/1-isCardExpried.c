#include "terminal.h"
int4_t isCardExpried(card *user)
{
    date expDate = getCardExpiryDate(user);
    date cDate = getTransactionDate();
    printf("%d/%d\n", expDate.mon, expDate.year);
    printf("%d/%d\n", cDate.mon, cDate.year);
    if (cDate.year <= expDate.year && cDate.mon < expDate.mon)
    {
        return (1);
    }
    return (0);
}