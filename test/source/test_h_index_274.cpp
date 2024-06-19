#include <doctest/doctest.h>

#include "leeter/h_index_274.hpp"

TEST_CASE("h index: test case 1") {
  vector<int> input = {3, 0, 6, 1, 5};
  h_index::Solution sol;
  int output = sol.hIndex(input);
  CHECK(output == 3);
}

TEST_CASE("h index: test case 2") {
  vector<int> input = {1, 3, 1};
  h_index::Solution sol;
  int output = sol.hIndex(input);
  CHECK(output == 1);
}
