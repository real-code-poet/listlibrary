#include "gtest/gtest.h"

extern "C"
{
#include "s_linked_list.h"
}

TEST(TRUE, ISTRUE)
{
	EXPECT_EQ(1, 1);
}
