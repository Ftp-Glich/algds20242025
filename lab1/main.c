#include <stdio.h>
#include "list.h"

int main()
{
    List* list = initList();
    addToList(list, "asjdfhjashdjasjkdhas");
    addToList(list, "asjdfhjashdjasjkdhas");
    addToList(list, "asjdfhjashdjasjkdhas");
    printList(list);
    deleteList(list);
    return 0;
}