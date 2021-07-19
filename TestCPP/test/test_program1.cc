#include "gtest/gtest.h"
#include "lib/function1.h"
#include "main/function2.h"

TEST(AdditionTest, Test1) 
{
  EXPECT_EQ(addition(1, 4), 5);
}


TEST(SubTest, Test1) 
{
  EXPECT_EQ(sub(9, 4), 5);
}