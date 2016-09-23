#include <gtest/gtest.h>
#include "classA.h"

class ATest : public ::testing::Test {};

TEST_F(ATest, avalue) {
    int testval(12345);
    A a(testval);
    EXPECT_EQ(testval, a.value());
}

