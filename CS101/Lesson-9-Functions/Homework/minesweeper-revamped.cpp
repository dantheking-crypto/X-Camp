#include <iostream>
using namespace std;
 
int main() {
  int length;
  int width;
  cin >> length >> width;
  char input[length][width];
  int numbers[length][width];
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      cin >> input[i][j];
      if (input[i][j] == '*') {
        numbers[i][j] = -1;
        continue;
      }
      else numbers[i][j] = 0;
    }
  }
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      if (numbers[i][j] == -1) continue;
      for (int a = i - 1; a <= i + 1; a++) {
        for (int b = j - 1; b <= j + 1; b++) {
          if (a == i && b == j) continue;
          else if (a >= 0 && a < length && b >= 0 && b < width) {
            if (numbers[a][b] == -1) numbers[i][j]++;
          }
        }
      }
    }
  }
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      if (numbers[i][j] == -1) cout << "*";
      else cout << numbers[i][j]; 
    }
    cout << endl;
  }
  return 0;
}
