#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

std::string timeConversion(std::string s) {
  std::string lastTwo = s.substr(8);
  std::string fullTime = s.substr(0, 8);
  std::istringstream ss(fullTime);
  std::string token;
  std::getline(ss, token, ':');
  int hours = std::stoi(token);

  if (lastTwo == "AM") {
    if (hours == 12) {
      hours = 0;
    }
  } else {
    if (hours != 12) {
      hours += 12;
    }
  }

  std::ostringstream result;
  result << std::setw(2) << std::setfill('0') << hours << s.substr(2, 6);
  return result.str();
}
