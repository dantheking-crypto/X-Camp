/*

Description:
There are n steps in a flight of stairs. You can climb one, two, or three steps at a time. How many possible ways are there to climb n steps? The answer is of modulo 998244353.

Input format:
One number n.

Output format:
One number indicating the number of possible ways there are to climb n steps

Sample input:
3

Sample output:
4
*/
#include <iostream>
using namespace std;
int main() {
  int length;
  cin >> length;
  long long arr[length + 1];
  arr[0] = 1;
  arr[1] = 1;
  arr[2] = 2;
  for (int i = 3; i <= length; i++) {
    arr[i] = arr[i - 1] % 998244353 + arr[i - 2] % 998244353 + arr[i - 3] % 998244353;
    arr[i] %= 998244353;
  }
  cout << arr[length];
  return 0;
}
