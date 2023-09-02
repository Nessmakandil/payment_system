#include "card.h"

date getCardExpiryDate(card *user)
{
    date myDate;
    myDate.mon = user->Date->mon;
    myDate.year = user->Date->year;
    return (myDate);
}