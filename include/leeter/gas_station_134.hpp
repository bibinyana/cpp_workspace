#include <vector>
using std::vector;

namespace gas_station {
  class Solution {
  public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int total_sum = 0;
      int current_sum = 0;
      int start = 0;
      for (int i = 0; i < gas.size(); i++) {
        current_sum += gas[i] - cost[i];
        total_sum += gas[i] - cost[i];
        if (current_sum < 0) {
          start = i + 1;
          current_sum = 0;
        }
      }
      return total_sum >= 0 ? start : -1;
    }
  };
}  // namespace gas_station