/**
* Count minimum coins for give rest
* Realise example greedy algoritm
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money = 0;
    int cents = 0;
    int coins = 0;

    /* INPUT */
    do
    {
        printf("Give your money: ");
        money = GetFloat();
        money *= 100; // Money converts to cents
        cents = (int) round(money); // Round and convert to integer
    }
    while (money < 1);

    /* CALCULATE */
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while(cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    /* OUTPUT */
    printf("%i\n", coins);
}