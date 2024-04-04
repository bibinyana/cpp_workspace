#include <doctest/doctest.h>

#include "leeter/remove_duplicate_from_sorted_array_26.hpp"

bool is_first_vector_in_second(const std::vector<int>& vec1, const std::vector<int>& vec2) {
  for (int i = 0; i < vec1.size(); i++) {
    if (vec1[i] != vec2[i]) {
      return false;
    }
  }
  return true;
}

TEST_CASE("remove duplicate from sorted array 1") {
  std::vector<int> input1 = {1, 1, 2};
  auto o = 2;
  std::vector<int> expected = {1, 2};
  Solution sol;
  auto output = sol.removeDuplicates(input1);
  CHECK(output == o);
  CHECK(is_first_vector_in_second(expected, input1));
}

TEST_CASE("remove duplicate from sorted array 2") {
  std::vector<int> input1 = {0,0,1,1,1,2,2,3,3,4};
  auto o = 5;
  std::vector<int> expected = {0,1,2,3,4};
  Solution sol;
  auto output = sol.removeDuplicates(input1);
  CHECK(output == o);
  CHECK(is_first_vector_in_second(expected, input1));
}