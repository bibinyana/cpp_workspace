#include <vector>
class Solution {
public:
  int removeElement(std::vector<int>& nums, int val) {
    // In place solution using two-pointer approach.
    // O(n) time and O(1) space.
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
      if(nums[i] != val){
        nums[j] = nums[i];
        ++j;
      }
    }
    return j;
  }
};