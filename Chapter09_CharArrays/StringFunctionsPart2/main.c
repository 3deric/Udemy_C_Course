#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *freeArray(char *array)
{
    if (array != NULL)
    {
        free(array);
    }
    return NULL;
}

char **createFriendsBook(unsigned int number_friends)
{
    // create a two dimensional pointer array which stores char array pointers
    char **friends = (char **)malloc(number_friends * sizeof(char*));

    for (unsigned int i = 0; i < number_friends; i++)
    {
        // allocate memory for each pointer array element of friends
        friends[i] = (char *)malloc(32 * sizeof(char));
    }

    return friends;
}

int **freeFriendsBook(char **friends, unsigned int number_friends)
{
    for (unsigned int i = 0; i < number_friends; i++)
    {
        friends[i] = freeArray(friends[i]);
    }

    free(friends);
    friends = NULL;
}

int main()
{
    unsigned int number_friends = 3;

    char **friends = createFriendsBook(number_friends);

    strcpy(friends[0], "Eric");
    strncpy(friends[1], "Peter Ernst", 32); //strncpy is more secure since it limits the amount of characters including the terminator
    strcpy(friends[2], "Paul Bademeister");

    strncat(friends[0], " Nachname", 10); // append a string to another one, length of the new string (including terminator)

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
        printf("%u\n", strlen(friends[i])); // strlen outputs the length of a string in characters
    }

    int compare0 = strncmp(friends[0], friends[1], 20);
    int compare1 = strncmp(friends[0], friends[2], 20);
    int compare2 = strncmp(friends[1], friends[2], 20);

    printf("%d\n", compare0); // returns zero if both strings are the same
    printf("%d\n", compare1); // otherwise outputs how far the letters are away on the ascii table 
    printf("%d\n", compare2);

    char *found0 = strchr(friends[0], 'i'); //pointer to the part of a string, starting where a character occured first
    char *found1 = strrchr(friends[2], 'e'); //pointer to the part of a string, starting where a character occured last

    char *found2 = strstr("Automobil", "tom"); //pointer to the part of the string which starts with the second string

    char *token = strtok(friends[2], " "); // returns a pointer to the part of the string until the token is found
    char *token2 = strtok(friends[2] + 4, " "); // skips the first four characters in the string

    if (token != NULL)
    {
        printf("%s\n", token);
    }

    if(found0 != NULL)
    {
        printf("%s\n", found0);
    }
    else
    {
        printf("Found nothing\n");
    }
    if(found1 != NULL)
    {
        printf("%s\n", found1);
    }
    else
    {
        printf("Found nothing\n");
    }
    if(found2 != NULL)
    {
        printf("%s\n", found2);
    }
    else
    {
        printf("Found nothing\n");
    }



 

    freeFriendsBook(friends, number_friends);

    return 0;
}