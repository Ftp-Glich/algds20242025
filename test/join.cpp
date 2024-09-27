#include "gtest/gtest.h"

extern "C"
{
    #include "join.h"
    #include "list.h"
}

TEST(join_check, ok)
{
    List* list = initList();
    addToList(list, "AsjdfhjashdjasjkdhaS");
    addToList(list, "AsjdfhjashdjasjkdhaS");
    addToList(list, "AsjdfhjashdjasjkdhaS");
    ASSERT_EQ(join(list), "AsjdfhjashdjasjkdhaSAsjdfhjashdjasjkdhaSAsjdfhjashdjasjkdhaS");
}