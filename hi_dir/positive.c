#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Give me a positive number: ");
        scanf("%i", &n);
    }while (n < 1);
    printf("Thanks for your positive number\n");
}