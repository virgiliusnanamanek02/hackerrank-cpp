#include <iostream>
#include <vector>

int birthdayCakeCandles(std::vector<int> candles) {
  int max = 0;
  int count = 0;

  for (std::vector<int>::size_type i = 0; i < candles.size(); i++) {

    if (max < candles[i]) {
      max = candles[i];
      count = 1;
    } else if (candles[i] == max) {
      count++;
    }
  }

  return count;
}
