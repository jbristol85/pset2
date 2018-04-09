#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string name = get_string();  // prompt for name
    char initials[4];  // initialize an array accepting 3 chars
    int quantitySpaces = 1;  // counting the spaces
    int index = 1;  //counting the index of the string
    initials[0] = toupper(name[0]);  // sets the first index of the initials array to the first initial in uppercase

    do  // while the index checks is less then the length of the string, check to see if the string[index] is a space, if so add the next char into the array
    {
        if (!isalpha(name[index]))
        {
            initials[quantitySpaces] = toupper(name[index + 1]);
            quantitySpaces++;
        }
        index++;
    }
    while (index < strlen(name) - 1);

    initials[quantitySpaces] = '\0';
    printf("%s\n", initials);  // print the initals array
}