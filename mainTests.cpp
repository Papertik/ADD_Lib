#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(TestMain, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");

  EXPECT_STREQ("Hello","Hello");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}