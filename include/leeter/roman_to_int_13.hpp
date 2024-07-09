#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;

namespace roman_to_int {
  class Solution {
  public:
    int romanToInt(string s) {
      int result = 0;
      int prev = 0;
      int current = 0;

      for (int i = s.size() - 1; i >= 0; i--) {
        switch (s[i]) {
          case 'I':
            current = 1;
            break;
          case 'V':
            current = 5;
            break;
          case 'X':
            current = 10;
            break;
          case 'L':
            current = 50;
            break;
          case 'C':
            current = 100;
            break;
          case 'D':
            current = 500;
            break;
          case 'M':
            current = 1000;
            break;
          default:
            break;
        }
        if (current >= prev) {
          result += current;
        } else {
          result -= current;
        }
        prev = current;
      }
      return result;
    }
  };
}  // namespace roman_to_int