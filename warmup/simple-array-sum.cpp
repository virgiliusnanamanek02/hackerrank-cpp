#include <iostream>
#include <vector>

int simpleArraySum(std::vector<int> nums) {
  int sum = 0;
  for (std::vector<int>::size_type i = 0; i < nums.size(); ++i) {
    sum += nums[i];
  }

  return sum;
}
