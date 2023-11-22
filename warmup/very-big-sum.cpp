#include <iostream>
#include <vector>

long aVeryBigSum(std::vector<long> ar) {
  long sum = 0;

  for (std::vector<int>::size_type i = 0; i < ar.size(); i++) {
    sum += ar[i];
  }

  return sum;
}
