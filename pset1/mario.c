#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = -1; // user height of pyramid

    /* INPUT */
    do
    {
        printf("Enter height: ");
        height = GetInt();
    } while (height < 0 || height > 23);

    /* OUTPUT */
    for (int i = 0; i < height; i++) // number of rows
    {
        for (int spaces = i; spaces < height - 1; spaces++) // row of spaces
            printf(" ");
        for (int fill = -2; fill < i; fill++) // row of fill
            printf("#");
        printf("\n");
    }
}