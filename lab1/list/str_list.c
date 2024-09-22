#include "list.h"


List* initList()
{
    struct List* list = malloc(sizeof(struct List));
    if(list == NULL) 
        return NULL;
    list->len = 0;
    list->next = 0;
    list->str = 0;
    return list;
}



void createNode(List* list, const char* str)
{
    list = malloc(sizeof(List));
    list->len = strlen(str);
    list->next = 0;
    list->str = malloc(list->len);
    memcpy(list->str, str, list->len);
    return (list != 0) ? 0 : -1;
}

void addToList(List* list, const char* str)
{
    if(list->str == 0) createNode(list, str);
    else if(list->next == 0) createNode(list->next, str);
    else return addToList(list->next, str);
}
    
void deleteList(List* list)
{
    if(list->next == 0) free(list);
    else
    {
        deleteList(list->next);
        free(list);
    }
}

void printList(List* list)
{
    printf(list->str);
    printf("\n");
    if(list->next != 0) printList(list->next);
}



