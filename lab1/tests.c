#include <stdio.h>
#include "list.h"
#include "join.h"


int main()
{
    List* list = initList();
    addToList(list, "AsjdfhjashdjasjkdhaS");
    addToList(list, "AsjdfhjashdjasjkdhaS");
    addToList(list, "AsjdfhjashdjasjkdhaS");
    printList(list);
    char* str = join(list);
    printf(str);
    free(str);
    deleteList(list);
    return 0;
}