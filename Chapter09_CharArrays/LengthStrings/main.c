#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t stringLength(char *str) //could be int too
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

int main()
{
    char name[] = "Eric";

    int size = stringLength(name);
    printf("The size of %s is %d\n",name, size);
    return 0;
}