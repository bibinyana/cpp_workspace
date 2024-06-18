#include <doctest/doctest.h>

#include "leeter/max_profit_121.hpp"

TEST_CASE("max profit: test case 1") {
  vector<int> input = {7, 1, 5, 3, 6, 4};
  Solution sol;
  int output = sol.maxProfit(input);
  CHECK(output == 5);
}

TEST_CASE("max profit: test case 2") {
  vector<int> input = {7, 6, 4, 3, 1};
  Solution sol;
  int output = sol.maxProfit(input);
  CHECK(output == 0);
}