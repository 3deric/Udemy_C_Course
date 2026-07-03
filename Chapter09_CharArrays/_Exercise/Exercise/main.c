#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    if (delimiter == NULL || list == NULL || list[0] == NULL)
    {
        return NULL;
    }

    size_t delimiter_len = strlen(delimiter);
    size_t current_input_len = strlen(list[0]);

    char *result = (char *)malloc(current_input_len * sizeof(char));

    if (result == NULL)
    {
        return NULL;
    }

    memset(result, 0 , current_input_len);

    int i = 0;
    while(list[i] != NULL) // iterate over the list til NULL is found
    {
        size_t current_result_len;
        if(i > 0) // in the first iteration use the length of the first element, otherwise the previous result
        {
            current_result_len = strlen(result);
        }
        else
        {
            current_result_len = current_input_len;
        }

        current_input_len = strlen(list[i]);
        size_t new_result_len = current_input_len;
        if (i > 0) // in the second iteration add the delimiter
        {
            new_result_len += delimiter_len;
            new_result_len += current_result_len;
        }

        if (new_result_len > current_result_len)
        {
            result = realloc(result, new_result_len + 1); // need to add +1 because of the null terminator
            current_result_len = new_result_len;
        }

        if (i > 0) // add the delimiter if the current element is not element 0
        {
            strncat(result, delimiter, current_result_len);
        }
        strncat(result, list[i], current_result_len); // add the current element of the list
        i++;
    }

    return result;
}

int main(void)
{
    char *list1[] = {NULL};
    char *list2[] = {"Eric", NULL};
    char *list3[] = {"Eric", "Peter", NULL};
    char *list4[] = {"Eric", "Peter", "Simon", NULL};
    char *s = NULL;

    s = join(" -> ", list1);
    if (s != NULL)
    {
        printf("List1: %s\n", s);
        free(s);
    }

    s = join(" -> ", list2);
    if (s != NULL)
    {
        printf("List2: %s\n", s);
        free(s);
    }

    s = join(" -> ", list3);
    if (s != NULL)
    {
        printf("List3: %s\n", s);
        free(s);
    }

    s = join(" -> ", list4);
    if (s != NULL)
    {
        printf("List4: %s\n", s);
        free(s);
    }
    return 0;
}