#include <doctest/doctest.h>

#include "leeter/jump_game_55.hpp"

TEST_CASE("jump game: test case 1") {
  vector<int> input = {2, 3, 1, 1, 4};
  jump_game_55::Solution sol;
  bool output = sol.canJump(input);
  CHECK(output == true);
}

TEST_CASE("jump game: test case 2") {
  vector<int> input = {3, 2, 1, 0, 4};
  jump_game_55::Solution sol;
  bool output = sol.canJump(input);
  CHECK(output == false);
}

TEST_CASE("jump game: test case 3") {
  vector<int> input = {0};
  jump_game_55::Solution sol;
  bool output = sol.canJump(input);
  CHECK(output == true);
}

TEST_CASE("jump game: test case 4") {
  vector<int> input = {1, 0};
  jump_game_55::Solution sol;
  bool output = sol.canJump(input);
  CHECK(output == true);
}

TEST_CASE("jump game: test case 5") {
  vector<int> input = {1, 0, 1, 0};
  jump_game_55::Solution sol;
  bool output = sol.canJump(input);
  CHECK(output == false);
}