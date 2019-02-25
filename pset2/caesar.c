/**
* Realise caesar codding
*/

#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]) % 26; // Getting key and filter it
        printf("plaintext: ");
        string message = GetString(); // Getting string from user
        for (int i = 0, n = strlen(message); i < n; i++)
        {
            if (isalpha(message[i]))
            {
                if (islower(message[i]))
                {
                    if (message[i] + key > 'z')
                    {
                        message[i] -= 26; // Turn around
                    }
                    message[i] += key; // Shift only letter
                }
                if (isupper(message[i]))
                {
                    if (message[i] + key > 'Z')
                    {
                        message[i] -= 26;
                    }
                    message[i] += key;
                }
            }
        }
        printf("ciphertext: %s\n", message);
    }
    else
    {
        printf("Add key please!\n"); // User gave wrong count parameters
        return 1;
    }
    return 0;
}