#include "add.h"

#include <gtest/gtest.h>

TEST(arithmetic, add) {
  ASSERT_EQ(3, add(1, 2));
}