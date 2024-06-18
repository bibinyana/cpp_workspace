#include <doctest/doctest.h>
#include "leeter/max_profit_122.hpp"

TEST_CASE("max profit 122: test case 1"){
    vector<int> input = {7,1,5,3,6,4};
    Solution sol;
    int output = sol.maxProfit122(input);
    CHECK(output == 7);
}