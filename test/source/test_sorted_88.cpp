#include <doctest/doctest.h>
#include "leeter/sorted_array_88.hpp"


TEST_CASE("Testing merge sort") {
    vector<int> array1 = {1, 2, 3, 0, 0, 0};
    vector<int> array2 = {2, 5, 6};
    vector <int> output = {1, 2, 2, 3, 5, 6};
    auto m = array1.len();
    auto n = array2.len();

    Solution sol;
    sol.merge(array1, m, array2, n);
    CHECK(array1 == output);
    
}