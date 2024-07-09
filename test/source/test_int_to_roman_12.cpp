#include <doctest/doctest.h>

#include "leeter/int_to_roman_12.hpp"

TEST_CASE("intToRoman: test case 1") {
  int_to_roman::Solution sol;
  std::string output = sol.intToRoman(3);
  CHECK(output == "III");
}

TEST_CASE("intToRoman: test case 2") {
  int_to_roman::Solution sol;
  std::string output = sol.intToRoman(4);
  CHECK(output == "IV");
}

TEST_CASE("intToRoman: test case 3") {
  int_to_roman::Solution sol;
  std::string output = sol.intToRoman(9);
  CHECK(output == "IX");
}

TEST_CASE("intToRoman: test case 4") {
  int_to_roman::Solution sol;
  std::string output = sol.intToRoman(58);
  CHECK(output == "LVIII");
}

TEST_CASE("intToRoman: test case 5") {
  int_to_roman::Solution sol;
  std::string output = sol.intToRoman(1994);
  CHECK(output == "MCMXCIV");
}