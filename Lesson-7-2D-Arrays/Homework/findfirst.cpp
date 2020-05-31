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
    int wanted;
    cin >> wanted;
    int index;
    bool found = false;
    for (int i = 0; i < length; i++) {
      if (arr[i] == wanted) {
        index = i;
        found = true;
        break;
      }
    }
    if (found) cout << index << endl;
    else cout << "No" << endl;
  }
  return 0;
}