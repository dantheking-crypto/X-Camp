#include <iostream>
#include <cmath>
using namespace std;
bool isPrime (int);
int main() {
  int number;
  cin >> number;
  cout << boolalpha << isPrime (number);
  return 0;
}
bool isPrime (int query) {
  if (query < 2) {
    return false;
  }
  for (int i = 2; i < sqrt(query); i++) {
    if (query % i == 0) {
      return false;
    }
  }
  return true;
}
