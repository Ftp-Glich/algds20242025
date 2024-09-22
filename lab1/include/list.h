#ifndef LAB1_LIST_H
#define LAB1_LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int len;
    char *str;
    struct List *next;
} List;

List* initList();
void createNode(List*, const char*);
void addToList(List*, const char*);
void deleteList(List*);
void printList(List*);

#endif 