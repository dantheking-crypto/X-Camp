#include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
  number /= 10;
  number %= 10;
  cout << number << endl;
  return 0;
}