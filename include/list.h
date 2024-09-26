#ifndef LAB1_LIST_H
#define LAB1_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List {
    int len;
    char *str;
    struct List *next;
} List;


List* initList()
{
    struct List* list = (List*)malloc(sizeof(struct List));
    if(list == NULL) 
        return NULL;
    list->len = 0;
    list->next = 0;
    list->str = 0;
    return list;
}


void createNode(struct List* list, const char* str)
{
    list->len = strlen(str);
    list->next = 0;
    list->str = (char*)malloc(list->len);
    strcpy(list->str, str);
}


void addToList(struct List* list, const char* str)
{
    if(list->str == 0) createNode(list, str);
    else if(list->next == 0) 
    {
        list->next = initList();
        createNode(list->next, str);
    }
    else addToList(list->next, str);
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


#endif 