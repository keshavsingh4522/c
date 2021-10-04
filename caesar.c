#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // checks if the command line argument is a positive integer
    if (argc == 2 && atoi(argv[1]) >= 1)
    {
        // maps the string to int
        int key = atoi(argv[1]);

        string plaintext = get_string("plaintext:  ");
        printf("ciphertext:  ");

        // loop to traverse through each character in plaintext
        for (int i = 0; i < strlen(plaintext); i++)
        {
            // check if the character is lowercase alphabet
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                // maps the ascii character mapping to standard like 0 for a, 1 for b and so on
                int normal_map = plaintext[i] - 97;
                // cipher formula with support for character wrapping
                int cipher = (normal_map + key) % 25;
                // changes the normal mapped alphabets to the ascii mapping
                printf("%c", cipher + 97);
            }
            // this else if block uses the same logic as above for the lowercase alphabets
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                int normal_map = plaintext[i] - 65;
                int cipher = (normal_map + key) % 25;
                printf("%c", cipher + 65);
            }
            // if the character is neither lower or uppercase alphabets we do nothing, just print it
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
    }
    // if the user does not specify the key or the key is invalid
    else {
        printf("Usage: %s key\n", argv[0]);
    }
}