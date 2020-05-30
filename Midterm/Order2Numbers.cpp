#include <iostream>
using namespace std;
int main() {
  int input1, input2;
  cin >> input1 >> input2;
  int larger, smaller;
  if (input1 > input2) {
    larger = input1;
    smaller = input2;
  }
  else {
    smaller = input1;
    larger = input2;
  }
  cout << larger << endl;
  cout << smaller << endl;
  return 0;
}