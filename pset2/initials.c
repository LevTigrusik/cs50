/**
* The program receive your name
* And then prints first initials letters in caps
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    /* INPUT */
    string name = GetString();

    /* OUTPUT */
    for (int i = 0; i < strlen(name); i++) // Here we are getting every symbol
    {
        if (i == 0 && name[0] != ' ')
            printf("%c", toupper(name[i])); // Output first non-space character
        else if (name[i] == ' ')
        {
            while (name[i] == ' ') // Skip one or more spaces
                i++;
            printf("%c", toupper(name[i])); // Output first character after space
        }
    }
    printf("\n");
}