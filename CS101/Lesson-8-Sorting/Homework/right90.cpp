#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int matrix[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }
  int right90[m][n];
   for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      right90[i][j] = matrix[n - j - 1][i];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << right90[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
