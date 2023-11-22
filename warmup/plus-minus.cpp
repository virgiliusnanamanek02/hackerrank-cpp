#include <iostream>
#include <vector>

void plusMinus(std::vector<int> arr) {
  int n = arr.size();
  int plus = 0;
  int min = 0;
  int zero = 0;

  for (std::vector<int>::size_type i = 0; i < n; i++) {
    if (arr[i] > 0) {
      plus++;
    } else if (arr[i] < 0) {
      min++;
    } else {
      zero++;
    }
  }

  double plusRes = static_cast<double>(plus) / n;
  double minRes = static_cast<double>(min) / n;
  double zeroRes = static_cast<double>(zero) / n;

  std::cout << plusRes << std::endl;
  std::cout << minRes << std::endl;
  std::cout << zeroRes << std::endl;
}
