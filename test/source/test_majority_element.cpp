#include <doctest/doctest.h>
#include "leeter/majority_element_169.hpp"


TEST_CASE("majority_element: test case 1"){
    std::vector<int> input = {3, 2, 3};
    int expected = 3;
    Solution sol;
    int output = sol.majorityElement(input);
    CHECK(output == expected);
}

TEST_CASE("majority_element: test case 2"){
    std::vector<int> input = {2,2,1,1,1,2,2};
    int expected = 2;
    Solution sol;
    int output = sol.majorityElement(input);
    CHECK(output == expected);
}

TEST_CASE("majority_element: test case 3"){
    std::vector<int> input = {3, 3, 4};
    int expected = 3;
    Solution sol;
    int output = sol.majorityElement(input);
    CHECK(output == expected);
}