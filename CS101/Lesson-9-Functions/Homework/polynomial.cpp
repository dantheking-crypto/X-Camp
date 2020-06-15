// Input an integer n,calculate 1+(1+2)+(1+2+3)+...+(1+2+3+...+n).
#include <iostream>
using namespace std;
inline int gausssum(int n) {
  return (n * (n + 1)) / 2;
}
int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
      total += gausssum(i);
    }
    cout << total << endl;
    return 0;
}
