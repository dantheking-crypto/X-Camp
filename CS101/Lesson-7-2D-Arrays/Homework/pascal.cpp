#include <iostream>
using namespace std;
int main() {
  int length;
  cin >> length;
  if (length <= 0) return 0;
  int pascal[length][length + 1];
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length + 1; j++) {
      pascal[i][j] = 0;
    }
  }
  pascal[0][1] = 1;
  cout << pascal[0][1] << endl;
  for (int i = 1; i < length; i++) {
    for (int j = 1; j <= i + 1; j++) {
      pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
      cout << pascal[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}