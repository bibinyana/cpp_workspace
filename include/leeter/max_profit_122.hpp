#include <vector>
using std::vector;

class Solution {
public:
    int maxProfit122(vector<int>& prices) {
        int maxProfit = 0;
        for (size_t i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};