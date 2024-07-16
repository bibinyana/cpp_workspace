#include <doctest/doctest.h>

#include "leeter/length_of_last_word_58.hpp"

TEST_CASE("lengthOfLastWord: test case 1") {
  string input = "Hello World";
  last_word_length::Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 5);
}

TEST_CASE("lengthOfLastWord: test case 2") {
  string input = "   fly me   to   the moon  ";
  last_word_length::Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 4);
}

TEST_CASE("lengthOfLastWord: test case 3") {
  string input = "a";
  last_word_length::Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 1);
}

TEST_CASE("lengthOfLastWord: test case 4") {
  string input = "   ";
  last_word_length::Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 0);
}