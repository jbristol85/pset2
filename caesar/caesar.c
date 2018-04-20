#include <stdio.h>  // for printf
#include <cs50.h>  // for get_string
#include <string.h>  // for strlen
#include <ctype.h>  // for isalpha and isupper
#include <stdlib.h> // for atoi

int main(int argc, string argv[])  // main function with 2 arguments
{
    int key;  // itializing variables
    int i;

    if (argc == 2)  // checking for 2 arguments
    {
        string s = argv[1]; // setting the str argument to variable
        key =  atoi(s);  // converting to an integer


        string p = get_string("plaintext: ");  // prompt for plaintext

        printf("ciphertext: "); // print title prior to printed cipher

        for (i = 0; i < strlen(p); i++)  // loop through the plaintext string
        {
            char character = p[i];  // set the iterated char to variable

            if (!isalpha(character))  // check if it's not alphebetic
            {
                printf("%c", character);  // print character
            }
            else if (isupper(character))  // check if uppercase
            {
                int alphabetic = character - 'A';  // convert to alphabetic index
                char cipher = ((alphabetic + key) % 26) + 'A';  // move character position
                printf("%c", cipher);  // print
            }
            else if (!isupper(character))  // check if lowercase
            {
                int alphabetic = character - 'a';
                char cipher = ((alphabetic + key) % 26) + 'a';
                printf("%c", cipher);
            }
        }
        printf("\n");  // print line break
    }
    else  // if no second argument is passed into main
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

}

// Comments:
//I really like your organization and the amount of comments you put. It makes it really easy to see what everything does.