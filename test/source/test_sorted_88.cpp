#include <doctest/doctest.h>

#include "leeter/sorted_array_88.hpp"

TEST_CASE("Testing merge sort 1") {
  vector<int> array1 = {1, 2, 3, 0, 0, 0};
  vector<int> array2 = {2, 5, 6};
  vector<int> output = {1, 2, 2, 3, 5, 6};
  auto m = 3;
  auto n = 3;

  Solution sol;
  sol.merge(array1, m, array2, n);
  CHECK(array1 == output);
}

TEST_CASE("Testing merge sort 2") {
  vector<int> array1 = {1};
  vector<int> array2 = {};
  vector<int> output = {1};
  auto m = 1;
  auto n = 0;

  Solution sol;
  sol.merge(array1, m, array2, n);
  CHECK(array1 == output);
}

TEST_CASE("Testing merge sort 3") {
  vector<int> array1 = {0};
  vector<int> array2 = {1};
  vector<int> output = {1};
  auto m = 0;
  auto n = 1;

  Solution sol;
  sol.merge(array1, m, array2, n);
  CHECK(array1 == output);
}