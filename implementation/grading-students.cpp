#include <iostream>
#include <vector>

std::vector<int> gradingStudents(std::vector<int> grades) {
  std::vector<int> currentGrades;

  for (std::vector<int>::size_type i = 0; i < grades.size(); i++) {
    if (grades[i] < 38) {
      currentGrades.push_back(grades[i]);
    } else {
      int roundUp = 5 - (grades[i] % 5);
      if (roundUp < 3) {
        currentGrades.push_back(grades[i] + roundUp);
      } else {
        currentGrades.push_back(grades[i]);
      }
    }
  }

  return currentGrades;
}
