#include <doctest/doctest.h>

#include <algorithm>

#include "leeter/rotate_array_189.hpp"

TEST_CASE("rotate array: testcase 1") {
  std::vector<int> input = {1, 2, 3, 4, 5, 6, 7};
  std::vector<int> output = {5, 6, 7, 1, 2, 3, 4};
  Solution sol;
  sol.rotate(input, 3);
  CHECK(std::equal(input.begin(), input.end(), output.begin()) == true);
}

TEST_CASE("rotate array: testcase 2") {
  std::vector<int> input = {-1, -100, 3, 99};
  std::vector<int> output = {3, 99, -1, -100};
  Solution sol;
  sol.rotate(input, 2);
  CHECK(std::equal(input.begin(), input.end(), output.begin()) == true);
}