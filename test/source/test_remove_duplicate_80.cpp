#include <doctest/doctest.h>

#include "leeter/remove_duplicate_from_sorted_array_80.hpp"

bool is_duplicate(const std::vector<int>& vec1, const std::vector<int>& vec2) {
  for (int i = 0; i < vec1.size(); i++) {
    if (vec1[i] != vec2[i]) {
      return false;
    }
  }
  return true;
}

TEST_CASE("remove duplicate from sorted array 3") {
  std::vector<int> input1 = {1, 1, 1, 2, 2, 3};
  auto o = 5;
  std::vector<int> expected = {1, 1, 2, 2, 3};
  Solution sol;
  auto output = sol.removeDuplicatesUpto2Allowed(input1);
  CHECK(output == o);
  CHECK(is_duplicate(expected, input1));
}

TEST_CASE("remove duplicate from sorted array 4") {
  std::vector<int> input1 = {0, 0, 1, 1, 1, 1, 2, 3, 3};
  auto o = 7;
  std::vector<int> expected = {0, 0, 1, 1, 2, 3, 3};
  Solution sol;
  auto output = sol.removeDuplicatesUpto2Allowed(input1);
  CHECK(output == o);
  CHECK(is_duplicate(expected, input1));
}