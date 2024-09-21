#ifndef LAB1_LIST_H
#define LAB1_LIST_H

typedef struct List {
    int len;
    char *str;
    struct List *next;
} List;

void initList(List*);
void addToList(List*, const char*);
void deleteList(List*);


#endif //LAB1_LIST.H