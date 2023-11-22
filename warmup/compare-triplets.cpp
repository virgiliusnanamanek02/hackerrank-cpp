#include <iostream>
#include <vector>

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
  int first = 0;
  int second = 0;
  std::vector<int> result(2);

  for (std::vector<int>::size_type i = 0; i < 3; i++) {
    if (a[i] > b[i]) {
      first++;
    } else if (a[i] < b[i]) {
      second++;
    } else {
      continue;
    }
  }

  result[0] = first;
  result[1] = second;
  return result;
}
