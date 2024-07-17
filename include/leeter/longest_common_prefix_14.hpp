#include <string>
#include <vector>

using std::string;
using std::vector;

namespace longest_common_prefix {
  class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs) {
      auto first = strs.begin();
      if (first == strs.end()) {
        return "";
      }
      for (int i = 0; i < first->size(); i++) {
        for (auto it = strs.begin() + 1; it != strs.end(); it++) {
          if (i >= it->size() || (*it)[i] != (*first)[i]) {
            return first->substr(0, i);
          }
        }
      }
      return *first;
    }
  };
}  // namespace longest_common_prefix