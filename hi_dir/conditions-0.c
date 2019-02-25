#include <stdio.h>

int main(void)
{
    printf("Please give me an integer: ");
    int n;
    scanf("%i", &n);
    if(n > 0)
        printf("You have a positive integer\n");
    else if (n == 0)
        printf("You have a zero\n");
    else
        printf("You have a negative integer\n");
}