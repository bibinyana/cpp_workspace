#include <doctest/doctest.h>

#include "leeter/roman_to_int_13.hpp"

TEST_CASE("romanToInt: test case 1") {
  roman_to_int::Solution sol;
  int output = sol.romanToInt("III");
  CHECK(output == 3);
}

TEST_CASE("romanToInt: test case 2") {
  roman_to_int::Solution sol;
  int output = sol.romanToInt("IV");
  CHECK(output == 4);
}

TEST_CASE("romanToInt: test case 3") {
  roman_to_int::Solution sol;
  int output = sol.romanToInt("IX");
  CHECK(output == 9);
}

TEST_CASE("romanToInt: test case 4") {
  roman_to_int::Solution sol;
  int output = sol.romanToInt("LVIII");
  CHECK(output == 58);
}

TEST_CASE("romanToInt: test case 5") {
  roman_to_int::Solution sol;
  int output = sol.romanToInt("MCMXCIV");
  CHECK(output == 1994);
}