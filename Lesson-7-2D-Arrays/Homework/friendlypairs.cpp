#include <iostream>
using namespace std;

int main() {
  int length, width;
  cin >> length >> width;
  int matrix[length][width];
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      cin >> matrix[i][j];
    }
  }
  int total = 0;
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      if (i > 0 && matrix[i][j] == matrix[i - 1][j]) total++;
      if (i < length - 1 && matrix[i][j] == matrix[i + 1][j]) total++;
      if (j > 0 && matrix[i][j] == matrix[i][j - 1]) total++;
      if (j < width - 1 && matrix[i][j] == matrix[i][j + 1]) total++;
    }
  }
  cout << total / 2 << endl;
  return 0;
}