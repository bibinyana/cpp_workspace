#include <algorithm>
#include <vector>

using std::max;
using std::min;
using std::vector;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int price : prices) {
      min_price = min(min_price, price);
      int profit = price - min_price;
      max_profit = max(max_profit, profit);
    }

    return max_profit;
  }
};