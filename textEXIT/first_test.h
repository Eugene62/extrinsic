#pragma once
#include <gtest/gtest.h>

TEST( IntegerTest, Addition )
{
   EXPECT_EQ( 4, 2 + 2 );
   EXPECT_EQ( 10, 3 + 7 );
};