#include <vector>
using std::vector;

namespace product_of_array_except_self {
  class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int prefix_sum = 1;
      int suffix_sum = 1;
      vector<int> result(nums.size(), 1);
      for (int i = 0; i < nums.size(); i++) {
        result[i] = prefix_sum;
        prefix_sum *= nums[i];
      }
      for (int i = nums.size() - 1; i >= 0; i--) {
        result[i] *= suffix_sum;
        suffix_sum *= nums[i];
      }
      return result;
    }
  };
}  // namespace product_of_array_except_self