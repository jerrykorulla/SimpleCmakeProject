#include "../src/my_math.h"
#include <gtest/gtest.h>

// A simple function to test
int add(int a, int b) { return a + b; }

TEST(AdditionTest, HandlesPositiveNumbers) { EXPECT_EQ(add(2, 3), 5); }

TEST(AdditionTest, HandlesNegativeNumbers) { EXPECT_EQ(add(-2, -3), -5); }

TEST(AdditionTest, HandlesMixedNumbers) { EXPECT_EQ(add(-2, 3), 1); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
