#include <iostream>
using namespace std;
int main() {
    int len;
    cin >> len;
    long fibonacci[len];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for (int i = 2; i < len; i++) {
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (int i = 0; i < len; i++) {
      cout << fibonacci[i] << " ";
    }
    return 0;
}
