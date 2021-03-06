#include <cs50.h>
#include <stdio.h>

int sigma(int p);

int main(void)
{
    int n;
    do
    {
        printf("Positive integer please: ");
        n = GetInt();
    }
    while (n < 1);

    int answer = sigma(n);
    printf("%i\n", answer);
}

int sigma(int p)
{
    if (p <= 0)
    {
        return 0;
    }
    else
    {
        return p + sigma(p - 1);
    }
}

/*int sigma(int p)
{
    if (p < 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= p; i++)
    {
        sum += i;
    }
    return sum;
}*/