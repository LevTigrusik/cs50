/**
 * vigenere.c
 * ---------------
 * The program allow get Vigenere cipher text from source plain text
 *
 * Use in command line ./vigenere key
 *  where key - any letters with ASCII table
 */

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc == 2) // count of arguments is right?
    {
        /* CHECK KEY ON ALPHABET */
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be only a letter string\n");
                return 1;
            }
        }

        string key = argv[1]; // have get a key from user
        printf("plaintext: ");
        string message = GetString(); // have get a string from user
        int key_length = strlen(key);
        int key_offset = 0; //start key offset (0 - default Vinegere cipher table)

        /* GETTING EVERY MESSAGE SYMBOL */
        for (int i = 0, n = strlen(message); i < n; i++)
        {
            int key_char = key_offset % key_length; // key position and turn around
            if (isalpha(message[i]))
            {
                /* KEY CHAPTER */
                if (isupper(key[key_char]))
                {
                    key[key_char] %= 'A'; // calc offset relative to fisrt letter: A
                }
                else if (islower(key[key_char]))
                {
                    key[key_char] %= 'a'; // calc offset relative to fisrt letter: a
                }

                /* MESSAGE CHAPTER */
                if (isupper(message[i]))
                {
                    message[i] = message[i] + key[key_char];
                    /* WARNING! Tracking overflow */
                    if(!isalpha(message[i]) || message[i] > 'Z')
                    {
                        message[i] -= 26; // turn around message symbol
                    }
                }
                else if (islower(message[i]))
                {
                    message[i] = message[i] + key[key_char];
                    /* WARNING! Tracking overflow */
                    if(!isalpha(message[i]) || message[i] > 'z')
                    {
                        message[i] -= 26; // turn around message symbol
                    }
                }

                key_offset++; // go to next key symbol
            }
        }
        printf("ciphertext: %s\n", message);
    }
    else
    {
        printf("Give a letter string-key parameter\n");
        return 1;
    }
}