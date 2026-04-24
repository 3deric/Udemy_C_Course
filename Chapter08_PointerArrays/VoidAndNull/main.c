#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pointer variable is initialized with null
    // malloc returns a void pointer
    // (int *) casts the void pointer to a int pointer
    int *a = NULL;
    a = (int *)malloc(sizeof(int));

    *a = 10; // assign 10 to the pointer
    printf("%d\n", *a);
    printf("0x%x\n", a);

    free(a);
    a = NULL;
    printf("0x%x\n", a);

    if (a != NULL)
    {
        printf("%d\n", *a);
    }


    return 0;
}
