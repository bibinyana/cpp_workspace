#include <vector>
using std::vector;

namespace jump_game_55 {
  class Solution {
  public:
    /// @brief Check if you are able to reach the last index.
    /// @param nums
    /// @return true or false
    bool canJump(vector<int>& nums) {
      int max_reachable = 0;
      for (int i = 0; i < nums.size(); ++i) {
        if (i > max_reachable) {
          return false;
        }
        max_reachable = std::max(max_reachable, i + nums[i]);
        if (max_reachable >= nums.size() - 1) {
          return true;
        }
      }
      return false;
    }
  };
}  // namespace jump_game_55