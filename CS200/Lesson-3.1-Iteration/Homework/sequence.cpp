#include <iostream>
using namespace std;
int main () {
  int n, d, first, last, m;
  cin >> n >> d >> first >> last >> m;
  double a[3][n];
  a[0][0] = 1;
  a[1][0] = 0;
  a[2][0] = 0;
  a[0][1] = 0;
  a[1][1] = 1;
  a[2][1] = 0;
  for (int i = 2; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      a[j][i] = (a[j][i - 1] - a[j][i - 2]) / 2.0;
    }
    a[2][i]++;
  }
  double f2 = (last - a[0][n - 1] * first - a[2][n - 1] * d) / a[1][n - 1];
  cout << a[0][m - 1] * first + a[1][m - 1] * f2 + a[2][m - 1] * d;
}
