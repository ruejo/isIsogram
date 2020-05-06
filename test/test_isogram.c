#include "vendor/unity.h"
#include "../src/isogram.h"
#include "vendor/unity_internals.h"
#include <stdlib.h>

void test_empty_string(void)
{
   TEST_ASSERT_TRUE(is_isogram(""));
}

void test_aa_is_no_isogramm(){
    bool result = is_isogram("aa");
    TEST_ASSERT_FALSE(result);
}

void test_abc_is_no_isogramm(){
    bool result = is_isogram("abc");
    TEST_ASSERT_FALSE(result);
}

int main(void)
{
   UnityBegin("isIsogram");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_aa_is_no_isogramm);
   RUN_TEST(test_abc_is_no_isogramm);

   UnityEnd();
   return 0;
}
