#include <iostream>
using namespace std;
int nchoosem (int n, int m) {
  int nproduct = 1;
  int mfactorial = 1;
  for (int i = 0; i < m; i++) {
    nproduct *= n;
    mfactorial *= m - i;
    n -= 1;
  }
  return nproduct / mfactorial;
}
int main() {
  int length, width;
  cin >> length >> width;
  int larger, smaller;
  if (length > width) {
    larger = length;
    smaller = width;
  }
  else {
    larger = width;
    smaller = length;
  }
  cout << nchoosem(larger + smaller, smaller) << endl;
  return 0;
}