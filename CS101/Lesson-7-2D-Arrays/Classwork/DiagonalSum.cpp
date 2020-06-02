#include <iostream>
using namespace std;
int main() {
  int squarelength;
  cin >> squarelength;
  int square[squarelength][squarelength];
  for (int i = 0; i < squarelength; i++) {
    for (int j = 0; j < squarelength; j++) {
      cin >> square[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < squarelength; i++) {
    sum += square[i][i];
  }
  cout << sum;
  return 0;
}