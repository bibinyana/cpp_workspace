#include <doctest/doctest.h>

#include "leeter/trapped_water_42.hpp"

TEST_CASE("trap: test case 1") {
  vector<int> input = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  trapped_water::Solution sol;
  int output = sol.trap(input);
  CHECK(output == 6);
}

TEST_CASE("trap: test case 2") {
  vector<int> input = {4, 2, 0, 3, 2, 5};
  trapped_water::Solution sol;
  int output = sol.trap(input);
  CHECK(output == 9);
}

TEST_CASE("trap: test case 3") {
  vector<int> input = {0, 1, 2, 3, 4, 5};
  trapped_water::Solution sol;
  int output = sol.trap(input);
  CHECK(output == 0);
}