#include <iostream>
using namespace std;
 
int main() {
  int length;
  cin >> length;
  int arr[length + 1];
  arr[0] = 1;
  arr[1] = 1;
  for (int i = 2; i <= length; i++) {
    arr[i] = arr[i - 1] % 1000000007 + arr[i - 2] % 1000000007;
    arr[i] %= 1000000007;
  }
  cout << arr[length];
  return 0;
}
