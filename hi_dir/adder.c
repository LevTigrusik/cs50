#include <stdio.h>

int main(void)
{
    printf("Give me an int: ");
    int x;
    scanf("%i", &x);
    printf("Give me another int: ");
    int y;
    scanf("%i", &y);
    printf("Sum number %i and %i is %i\n", x, y, x + y);
}