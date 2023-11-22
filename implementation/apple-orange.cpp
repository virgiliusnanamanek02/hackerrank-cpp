#include <iostream>
#include <vector>

void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples,
                           std::vector<int> oranges) {
  int firstCount = 0;
  int secondCount = 0;

  for (std::vector<int>::size_type i = 0; i < apples.size(); i++) {
    int apple = a + apples[i];
    if (apple >= s && apple <= t) {
      firstCount++;
    }
  }

  for (std::vector<int>::size_type i = 0; i < oranges.size(); i++) {
    int orange = b + oranges[i];
    if (orange >= s && orange <= t) {
      secondCount++;
    }
  }

  std::cout << firstCount << std::endl;
  std::cout << secondCount << std::endl;
}
