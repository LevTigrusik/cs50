#include <stdio.h>

int main()
{
    printf("State your name: ");
    char name[5];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}