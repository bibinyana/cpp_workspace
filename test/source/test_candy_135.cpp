#include <doctest/doctest.h>

#include "leeter/candy_135.hpp"

TEST_CASE("candy: test case 1") {
  vector<int> input = {1, 0, 2};
  candy::Solution sol;
  int output = sol.candy(input);
  CHECK(output == 5);
}

TEST_CASE("candy: test case 2") {
  vector<int> input = {1, 2, 2};
  candy::Solution sol;
  int output = sol.candy(input);
  CHECK(output == 4);
}
