#include <iostream>
using namespace std;
int main() {
  int length;
  cin >> length;
  int arr[length][length];
  int counter = 1;
  int i = 0;
  int j = 0;
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      arr[i][j] = 0;
    }
  }
  while (counter <= length * length) {
   while (j < length && arr[i][j] == 0) {
     arr[i][j] = counter;
     counter++;
     j++;
   }
   i++;
   j--;
   while (i < length && arr[i][j] == 0) {
     arr[i][j] = counter;
     counter++;
     i++;
   }
   i--;
   j--;
   while (j >= 0 && arr[i][j] == 0) {
     arr[i][j] = counter;
     counter++;
     j--;
   }
   j++;
   i--;
   while (i >= 0 && arr[i][j] == 0) {
     arr[i][j] = counter;
     counter++;
     i--;
   }
   j++;
   i++;
  }
  int row, col;
  cin >> row >> col;
  cout << arr[row - 1][col - 1];
  return 0;
}
