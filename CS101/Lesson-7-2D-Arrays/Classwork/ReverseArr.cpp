#include <iostream>
using namespace std;
int main() {
  int squarelength;
  cin >> squarelength;
  int square[squarelength][squarelength];
  for (int i = 0; i < squarelength; i++) {
    for (int j = squarelength - 1; j >= 0; j--) {
      cin >> square[i][j];
    }
  }
  for (int i = 0; i < squarelength; i++) {
    for (int j = 0; j < squarelength; j++) {
      cout << square[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}