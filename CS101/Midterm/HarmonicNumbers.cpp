#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int number;
  cin >> number;
  double sum = 0;
  for (int i = 1; i <= number; i++) {
    sum += 1.0 / i;
  }
  cout << fixed << setprecision(6) << sum << endl;
  return 0;
}