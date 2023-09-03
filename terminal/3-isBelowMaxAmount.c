#include "terminal.h"
int4_t isBelowMaxAmount(card *user)
{
    if (getTransactionAmount(user) < maxTrans)
    {
        return (1);
    }
    return (0);
}