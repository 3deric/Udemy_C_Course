#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[] = {'E','r','i','c','\0'}; //character array length is determined by the amount of characters, last character needs to be \n
    char name2[5] = {'E','r','i','c','\0'}; //character array length is defined, but the \n needs to be added by hand too
    char name3[] = "Eric"; //"Eric" is automatically converted into a character array \n is not required, length is not required
    char name4[32] = {'\0'}; //if the length is not clear, it is advided to use a large length which is power of 2,
                            // all characters are initialized with \0, if the array is updated those characters will be changed and the last one (except the string is 32 characters or longer) will automatically be a \n
    char *name5 = (char *)malloc(32* sizeof(char)); // character array on the heap
    name5[0] = 'E';
    name5[1] = 'r';
    name5[2] = 'i';
    name5[3] = 'c';
    name5[4] = '\0';

    // print a string in a for loop
    for (unsigned int i = 0; i < 4; i++)
    {
        printf("%c", name5[i]);
    }
    printf("\n");

    //print a string in a single print statement
    //will print til it finds \0
    printf("%s\n", name5);

    free(name5);
    name5 = NULL;

    return 0;
}