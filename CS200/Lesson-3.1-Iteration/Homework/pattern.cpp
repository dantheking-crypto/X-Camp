#include <iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  int a[n];
  a[0] = 0;
  a[1] = 1;
  a[2] = 1;
  for (int i = 3; i < n; i++) {
    a[i] = a[i - 3] + 2 * a[i - 2] + a[i - 1];
  }
  cout << a[n - 1];
  return 0;
}