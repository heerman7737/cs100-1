#include "gtest/gtest.h"

#include "factory_tests.hpp"
#include "composite_tests.hpp"
#include "strategy_tests.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
