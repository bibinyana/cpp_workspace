#include <doctest/doctest.h>

#include "leeter/jump_game_45.hpp"

TEST_CASE("jump game: test case 1") {
  vector<int> input = {2, 3, 1, 1, 4};
  jump_game_45::Solution sol;
  int output = sol.jump(input);
  CHECK(output == 2);
}

TEST_CASE("jump game: test case 2") {
  vector<int> input = {2, 3, 0, 1, 4};
  jump_game_45::Solution sol;
  int output = sol.jump(input);
  CHECK(output == 2);
}

// TEST_CASE("jump game: test case 3") {
//   vector<int> input = {2, 3, 0, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//   jump_game_45::Solution sol;
//   int output = sol.jump(input);
//   CHECK(output == 4);
// }