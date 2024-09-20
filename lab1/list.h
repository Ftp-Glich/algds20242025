#ifndef LAB1_LIST.H
#define LAB1_LIST.H

typedef struct List {
    int len;
    char *str;
    struct List *next;
} List;


#endif //LAB1_LIST.H