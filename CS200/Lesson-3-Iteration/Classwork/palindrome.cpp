#include <iostream>
using namespace std;
int main() {
  string myString;
  cin >> myString;
  bool isPalindrome = true;
  for (int i = 0; i < myString.length() / 2.0; i++) {
    if (myString[i] != myString[myString.length() - i - 1]) {
      cout << "NO" << endl;
      isPalindrome = false;
      break;
    }
  }
  if (isPalindrome) cout << "YES" << endl;
  return 0;
}
