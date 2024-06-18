#include <algorithm>
#include <vector>

using std::vector;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            max_profit += std::max(prices[i] - prices[i - 1], 0);
        }
        return max_profit;
    }
};