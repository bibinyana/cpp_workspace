#include <doctest/doctest.h>

#include "leeter/gas_station_134.hpp"

TEST_CASE("canCompleteCircuit: test case 1") {
  gas_station::Solution sol;
  vector<int> gas = {1, 2, 3, 4, 5};
  vector<int> cost = {3, 4, 5, 1, 2};
  int output = sol.canCompleteCircuit(gas, cost);
  CHECK(output == 3);
}

TEST_CASE("canCompleteCircuit: test case 2") {
  gas_station::Solution sol;
  vector<int> gas = {2, 3, 4};
  vector<int> cost = {3, 4, 3};
  int output = sol.canCompleteCircuit(gas, cost);
  CHECK(output == -1);
}

TEST_CASE("canCompleteCircuit: test case 3") {
  gas_station::Solution sol;
  vector<int> gas = {5, 1, 2, 3, 4};
  vector<int> cost = {4, 4, 1, 5, 1};
  int output = sol.canCompleteCircuit(gas, cost);
  CHECK(output == 4);
}