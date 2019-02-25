#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char* string = GetString();
    if (string == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(string); i < n; i++)
    {
        printf("%c\n", *(string+i));
    }
}