#include <doctest/doctest.h>

#include "leeter/product_of_array_except_self_238.hpp"

TEST_CASE("Product of Array Except Self") {
  product_of_array_except_self::Solution s;
  std::vector<int> nums = {1, 2, 3, 4};
  std::vector<int> expected = {24, 12, 8, 6};
  CHECK(s.productExceptSelf(nums) == expected);
}

TEST_CASE("Product of Array Except Self - Test case 2") {
  product_of_array_except_self::Solution s;
  std::vector<int> nums = {-1, 1, 0, -3, 3};
  std::vector<int> expected = {0, 0, 9, 0, 0};
  CHECK(s.productExceptSelf(nums) == expected);
}