#include "join.h"
#define size_t unsigned int


static size_t countLen(List* list)
{
    List* ptr = list;
    size_t res = 0;
    while (ptr != 0)
    {
        res += ptr->len;
        ptr = ptr->next;
    }
    return res;
}



char* join(List* list)
{
    size_t len = countLen(list);
    char* str = malloc(len + 1);
    int pos = 0;
    List* ptr = list;
    while (ptr != 0)
    {
        memcpy((str + pos), ptr->str, ptr->len);
        pos += ptr->len;
        ptr = ptr->next;
    }
    str[pos] = '\0';
    return str;
}