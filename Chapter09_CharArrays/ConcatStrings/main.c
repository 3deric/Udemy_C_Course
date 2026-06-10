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
        str++; // offsets the pointed character of the string by 1
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
    // compare every character in each string, if a character is different, return 0
    // if no different character was found return 1, both strings are equal!
    while((*str0 != '\0') && (*str1 != '\0'))
    {
        if (*str0 != *str1)
        {
            return 0;
        }
        str0++;
        str1++;
    }
    return 1;
}

char *concatenate_string(char *target, char *source, size_t n)
{
    if (target == NULL)
    {
        return NULL;
    }
    if (source == NULL || n == 0)
    {
        return target;
    }

    size_t target_len = string_length(target);
    target += target_len; // move the pointer of target to the null terminator of the string

    size_t i = 0;
    while((*source != '\0') && (i < n -1)) // n-1 because the final string needs to have the null terminator too, this needs to be added
    {
        *target = *source; // set the last character to the first character of the source pointer
        target++; // move the pointer one to the right for target and source
        source++;
        i++;
    }
    *target = '\0'; // adding the null terminator
    return target;
}

int main()
{
    char string0[32] = "Eric";
    char string1[] = "Lastname";

    concatenate_string(string0, " ", 2);
    concatenate_string(string0, string1, 16);

    printf("%s\n", string0);
        

    return 0;
}