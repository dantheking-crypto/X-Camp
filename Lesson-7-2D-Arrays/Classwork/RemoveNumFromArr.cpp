#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int index;
  cin >> index;
  int newarr[n - 1];
  if (index >= 0 && index < n) {
    int arrindex = 0;
    for (int i = 0; i < n; i++) {
      if (i != index) {
        newarr[arrindex] = arr[i];
        arrindex++;
      }
    }
    for (int i = 0; i < n - 1; i++) {
      cout << newarr[i] << " ";
    }
  }
  else {
    for (int i = 0; i < n; i++) {
      cout << arr[i];
    }
  }
  return 0;
}