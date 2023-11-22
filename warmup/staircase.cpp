#include <iostream>

void staircase(int n) {
  for (int i = 1; i <= n; i++) {
    std::cout << std::string(n - i, ' '); // Cetak spasi sebelum karakter '#'
    std::cout << std::string(i, '#') << std::endl;
  }
}
