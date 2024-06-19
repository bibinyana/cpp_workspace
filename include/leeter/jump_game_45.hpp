#include <vector>

using std::vector;

namespace jump_game_45 {
  class Solution {
  public:
    int jump(vector<int>& nums) {
      int curr_jump = 0;
      int max_jump = 0;
      int jump_count = 0;
      for (int i = 0; i < nums.size() - 1; i++) {
        max_jump = std::max(max_jump, i + nums[i]);
        if (i == curr_jump) {
          curr_jump = max_jump;
          jump_count++;
        }
        if (curr_jump >= nums.size() - 1) {
          break;
        }
      }
      return jump_count;
    }
  };
}  // namespace jump_game_45