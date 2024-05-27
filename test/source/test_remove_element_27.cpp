#include <doctest/doctest.h>

#include <algorithm>

#include "leeter/remove_element_27.hpp"

bool is_first_vector_in_second(const std::vector<int>& vec1, const std::vector<int>& vec2,
                               int count) {
  for (const auto& item : vec1) {
    if (std::find(vec2.begin(), vec2.begin() + count, item) == vec2.begin() + count) {
      return false;
    }
  }
  return true;
}

TEST_CASE("remove element test case 1") {
  std::vector<int> input1 = {3, 2, 2, 3};
  int val = 3;
  int o = 2;
  std::vector<int> expected = {2, 2};
  Solution sol;
  auto ret = sol.removeElement(input1, val);
  CHECK(ret == o);
  CHECK(is_first_vector_in_second(expected, input1, o));
}

TEST_CASE("remove element test case 2") {
  std::vector<int> input1 = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;
  int o = 5;
  std::vector<int> expected = {0, 1, 4, 0, 3};
  Solution sol;
  auto ret = sol.removeElement(input1, val);
  CHECK(ret == o);
  CHECK(is_first_vector_in_second(expected, input1, o));
}
