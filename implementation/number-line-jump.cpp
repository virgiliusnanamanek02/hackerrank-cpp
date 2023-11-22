#include <iostream>
#include <string>

std::string kangaroo(int x1, int v1, int x2, int v2) {
  double distance = static_cast<double>(x2 - x1) / (v1 - v2);

  if (v1 < v2) {
    return "NO";
  }

  if (distance >= 0 && distance == static_cast<int>(distance)) {
    return "YES";
  }

  return "NO";
}
