#include "terminal.h"
size_t setMaxAmount(card *user)
{
    if (isBelowMaxAmount(user))
    {
        return (getTransactionAmount(user));
    }
    return (maxTrans);
}