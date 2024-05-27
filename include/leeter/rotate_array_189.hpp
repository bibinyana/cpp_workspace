#include <algorithm>
#include <vector>
using std::vector;

class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    if (nums.size() > 1) {
      k = k % nums.size();
      std::reverse(nums.begin(), nums.end());
      std::reverse(nums.begin(), nums.begin() + k);
      std::reverse(nums.begin() + k, nums.end());
    }
  }
};