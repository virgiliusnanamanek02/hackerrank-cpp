#include <iostream>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> arr) {
  int firstSum = 0;
  int secondSum = 0;
  int n = arr.size();

  for (std::vector<int>::size_type i = 0; i < n; i++) {
    firstSum += arr[i][i];
    secondSum += arr[i][n - i - 1];
  }

  int result = std::abs(firstSum - secondSum);

  return result;
}
