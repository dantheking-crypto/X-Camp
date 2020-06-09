#include <iostream>
using namespace std;
int main() {
  int length;
  cin >> length;
  int arr1[length][length];
  int arr2[length][length];
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cin >> arr1[i][j];
    }
  }
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cin >> arr2[i][j];
    }
  }
  int newarr[length][length];
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      int dotproduct = 0;
      for (int a = 0, b = 0; a < length && b < length; a++, b++) {
        dotproduct += arr1[i][a] * arr2[b][j];
      }
      newarr[i][j] = dotproduct;
    }
  }
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << newarr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
