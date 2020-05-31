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
      if (input[i - 1][j] == '*' && i > 0) numbers[i][j]++;
      if (input[i + 1][j] == '*' && i < length - 1) numbers[i][j]++;
      if (input[i][j - 1] == '*' && j > 0) numbers[i][j]++;
      if (input[i][j + 1] == '*' && j < width - 1) numbers[i][j]++;
      if (input[i - 1][j - 1] == '*' && i > 0 && j > 0) numbers[i][j]++;
      if (input[i - 1][j + 1] == '*' && i > 0 && j < width - 1) numbers[i][j]++;
      if (input[i + 1][j - 1] == '*' && i < length - 1 && j > 0) numbers[i][j]++;
      if (input[i + 1][j + 1] == '*' && i < length - 1 && j < width - 1) numbers[i][j]++;
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