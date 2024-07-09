#include <array>
#include <string>
using std::array;
using std::string;

namespace int_to_roman {
  class Solution {
  public:
    string intToRoman(int num) {
      string result = "";
      const array<int, 13> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
      const string symbols[]
          = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

      for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
          num -= values[i];
          result += symbols[i];
        }
      }
      return result;
    }
  };
}  // namespace int_to_roman

int main() {
  int_to_roman::Solution sol;
  sol.intToRoman(1994);
  return 0;
}
