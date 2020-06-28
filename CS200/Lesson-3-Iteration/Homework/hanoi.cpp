#include <iostream>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  unsigned long arr[n];
  arr[0] = 1;
  for (int i = 1; i < n; i++) {
    arr[i] = 2 * arr[i - 1] + 1;
  }
  cout << arr[n - 1];
  return 0;
}
