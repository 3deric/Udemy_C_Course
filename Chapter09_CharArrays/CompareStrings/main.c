#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t string_length(char *str) //could be int too
{
    if (str == NULL)
    {
        return 0;
    }

    size_t i = 0;
    while(*str != '\0')
    {
        str++; // gets to the next characterof a string
        i++;
    }
    return i; // null terminator needs to be part of the string!
}

int compare_string(char *str0, char *str1)
{
    if (str0 == NULL || str1 == NULL) // check if one of the strings is a null pointer
    {
        return 0;
    }
    if (string_length(str0) != string_length(str1)) // compare if both strings have the same length
    {
        return 0;
    }
    int i = 0;
    // compare every character in each string, if a character is different, return 0
    // if no different character was found return 1, both strings are equal!
    while(i < string_length(str0))
    {
        if (str0[i] != str1[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int main()
{
    char string0[] = "Eric";
    char string1[] = "Eric";

    int compare = compare_string(string0, string1);

    if (compare == 1)
    {
        printf("The strings: %s and %s are equal!\n", string0, string1);
    }
    else
    {
        printf("The strings %s and %s are not equal!\n", string0, string1);
    }
        

    return 0;
}