#include <string>

using std::string;

namespace last_word_length {
  class Solution {
  public:
    int lengthOfLastWord(string s) {
      int last_len = 0;
      for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
          last_len++;
        } else {
          if (last_len > 0) {
            return last_len;
          }
        }
      }
      return last_len;
    }
  };
}  // namespace last_word_length
