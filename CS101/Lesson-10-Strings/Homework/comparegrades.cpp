#include <iostream>
using namespace std;
inline void swap (int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
int main() {
  int length;
  cin >> length;
  int grades[length][3];
  for (int i = 0; i < length; i++) {
    cin >> grades[i][0] >> grades[i][1];
    grades[i][2] = grades[i][0] + grades[i][1];
  }
  for (int i = 1; i < length; i++) {
    int current = i;
    while (current > 0) {
      if (grades[current][2] > grades[current - 1][2]) break;
      else if (grades[current][2] == grades[current - 1][2]) {
        if (grades[current][0] > grades[current - 1][0]) break;
        else if (grades[current][0] == grades[current - 1][0]) {
          if (grades[current][1] > grades[current - 1][1]) break;
        }
      }
      swap (grades[current][0], grades[current - 1][0]);
      swap (grades[current][1], grades[current - 1][1]);
      swap (grades[current][2], grades[current - 1][2]);
      current--;
    }
  }
    for (int i = length - 1; i >= 0; i--) {
    cout << grades[i][0] << " " << grades[i][1] << endl;
  }
  return 0;
}
