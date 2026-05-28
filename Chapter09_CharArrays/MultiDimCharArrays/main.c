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
    strcpy(friends[1], "Peter Ernst");
    strcpy(friends[2], "Paul Bademeister");

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
    }

    freeFriendsBook(friends, number_friends);

    return 0;
}