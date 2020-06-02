#include <iostream>
using namespace std;
int main() {
  int n;
  while (cin >> n) {
    int length;
    length = n;
    int arr[length];
    for (int i = 0; i < length; i++) {
      cin >> arr[i];
    }
    int unwanted;
    cin >> unwanted;
    bool found = false;
    for (int i = 0; i < length; i++) {
      if (arr[i] == unwanted && !found) {
        found = true;
      }
      else cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}