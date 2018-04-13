#include <stdio.h>  // for printf
#include <cs50.h>  // for get_string
#include <string.h>  // for strlen
#include <ctype.h>  // for isalpha and isupper
#include <stdlib.h> // for atoi

int main(int argc, string argv[])  // main function with 2 arguments
{
    // string key;  // itializing variables
    int i, k;
    string key;

    if (argc == 2)  // checking for 2 arguments
    {
        key = argv[1]; // setting the str argument to variable



        string p = get_string("plaintext: ");  // prompt for plaintext

        printf("ciphertext: "); // print title prior to printed cipher

        for (i = 0; i < strlen(p); i++)  // loop through the plaintext string
        {
            //ensure key isalpha
            //2nd for loop iterating over the plaintext length
            // key length % to get get index
            //add index into remainder of caesars
            // printf("itterate through k %i & ", k);

            char character = p[i];  // set the iterated char to variable
            int keyindex;
            char keycipher;


            if (!isalpha(character))  // check if it's not alphebetic
            {
                printf("%c", character);  // print character
            }
            else
            {
                for(k = 0; k < strlen(key); k++)
                {
                    if(k > strlen(key))
                    {
                        keyindex = key[k];

                        if  (isupper(keyindex))  // check if uppercase
                        {
                            keycipher = keyindex - 'A';
                        }
                        else if (!isupper(keyindex))  // check if lowercase
                        {
                            keycipher = keyindex - 'a';
                        }
                    }
                    else
                    {
                        k = 0;
                    }

                    if (isupper(character))  // check if uppercase
                    {
                        int alphabetic = character - 'A';  // convert to alphabetic index
                        char cipher = ((alphabetic + keycipher) % 26) + 'A';  // move character position
                        printf("%c", cipher);  // print
                    }
                    else // if (!isupper(character))  // check if lowercase
                    {
                        int alphabetic = character - 'a';
                        char cipher = ((alphabetic + keycipher) % 26) + 'a';
                        printf("%c", cipher);
                    }

                }
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

    // if (!isalpha(character))
    //         {
    //             k = k-1;
    //         }

    //       else if  (isupper(keyindex))  // check if uppercase
    //         {
    //             keycipher = keyindex - 'A';  // convert to alphabetic index
    //             // keycipher = ((alphabetic + keyindex) % 26) + 'A';  // move character position

    //         }
    //         else if (!isupper(keyindex))  // check if lowercase
    //         {
    //             keycipher = keyindex - 'a';
    //             // keycipher = ((alphabetic + keyindex) % 26) + 'a';

    //         }