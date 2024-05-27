#include <algorithm>
#include <vector>
using std::vector;

class Solution {
public:
  int majorityElementNaive(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int count_best = 0;
    int count_current = 0;
    int num = nums[0];
    int candidate = nums[0];
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == candidate) {
        count_current++;
      } else {
        if (count_best < count_current) {
          count_best = count_current;
          num = candidate;
        }
        candidate = nums[i];
        count_current = 1;
      }
    }
    if (count_current > count_best) {
      count_best = count_current;
      num = candidate;
    }
    return num;
  }

  int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (const int& num : nums) {
      if (count == 0) {
        candidate = num;
      }
      count += (num == candidate) ? 1 : -1;
    }
    return candidate;
  }
};