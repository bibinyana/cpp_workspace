#include <doctest/doctest.h>
#include "leeter/length_of_last_word_58.hpp"

TEST_CASE("lengthOfLastWord: test case 1") {
  string input = "Hello World";
  Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 5);
}

TEST_CASE("lengthOfLastWord: test case 2") {
  string input = "   fly me   to   the moon  ";
  Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 4);
}

TEST_CASE("lengthOfLastWord: test case 3") {
  string input = "a";
  Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 1);
}

TEST_CASE("lengthOfLastWord: test case 4") {
  string input = "   ";
  Solution sol;
  int output = sol.lengthOfLastWord(input);
  CHECK(output == 0);
}