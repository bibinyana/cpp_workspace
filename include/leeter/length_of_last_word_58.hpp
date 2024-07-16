#include <string>

using std::string;

class Solution {
public:
  int lengthOfLastWord(string s) {
    int last_len = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == ' ') {
        if (last_len > 0) {
          break;
        }
      } else {
        last_len++;
      }
    }
    return last_len;
  }
};