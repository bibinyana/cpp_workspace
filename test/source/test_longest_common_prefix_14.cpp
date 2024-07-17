#include <doctest/doctest.h>

#include "leeter/longest_common_prefix_14.hpp"

TEST_CASE("longestCommonPrefix: empty input") {
  vector<string> input = {};
  longest_common_prefix::Solution sol;
  string output = sol.longestCommonPrefix(input);
  CHECK(output == "");
}

TEST_CASE("longestCommonPrefix: no common prefix") {
  vector<string> input = {"abc", "def", "ghi"};
  longest_common_prefix::Solution sol;
  string output = sol.longestCommonPrefix(input);
  CHECK(output == "");
}

TEST_CASE("longestCommonPrefix: common prefix exists") {
  vector<string> input = {"flower", "flow", "flight"};
  longest_common_prefix::Solution sol;
  string output = sol.longestCommonPrefix(input);
  CHECK(output == "fl");
}