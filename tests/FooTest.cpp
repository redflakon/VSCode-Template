#include "gtest/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(FooTest, Bar)
{
    EXPECT_EQ(0, 0);
}

TEST(FooTest, FooBar)
{
    EXPECT_EQ(1, 1);
}