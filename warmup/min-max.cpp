#include <algorithm>
#include <iostream>
#include <vector>

void miniMaxSum(std::vector<int> arr) {
  std::sort(arr.begin(),
            arr.end()); // Mengurutkan angka-angka dari terkecil ke terbesar

  long long sum = 0;
  for (int i = 0; i < 5; ++i) {
    sum += arr[i]; // Menjumlahkan semua angka
  }

  // Mengurangi nilai maksimum dan minimum untuk mendapatkan jumlah minimum dan
  // maksimum
  long long minSum = sum - arr[4]; // Mengurangi nilai maksimum
  long long maxSum = sum - arr[0]; // Mengurangi nilai minimum

  std::cout << minSum << " " << maxSum << std::endl;
}
