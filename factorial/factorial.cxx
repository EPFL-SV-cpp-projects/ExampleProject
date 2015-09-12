#include <stdio.h>
#include "gtest/gtest.h"

int factorial(int n) {
  return n<=1 ? n : n * factorial (n-1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(0, factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(1, factorial(1));
  EXPECT_EQ(2, factorial(2));
  EXPECT_EQ(40320, factorial(8));
}

