#include "terminal.h"

card *assignUser(void)
{
    card *user = malloc(sizeof(card));
    date *myDate = malloc(sizeof(date));
    user->name = "Nessma Kandil";
    myDate->mon = Dec;
    myDate->year = 2023;
    user->Date = myDate;
    user->PAN = 011002223653;
    user->trans = 80000;
    return (user);
}
int main(void)
{
    card *user = assignUser();
    char *a = getCardHolderName(user);
    size_t b = getCardPAN(user);
    date c = getCardExpiryDate(user);
    size_t d = setMaxAmount(user);
    
    if (isCardExpried(user))
    {
        printf("user name: %s\n", a);
        printf("user Card No.: %u\n", b);
        printf("user's card expiration Date: %d/%d\n", c.mon, c.year);
        printf("transction amount: %u\n", d);
    }
    else
    {
        printf("The card has expired.\nYou need to call our customer service.\n");
    }
    return (0);
}