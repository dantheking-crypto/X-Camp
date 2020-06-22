#include <iostream>
using namespace std;
bool isPalindrome (string myString, int i, int j) {
  if (i >= j) return true;
  char left = myString[i];
  char right = myString[j];
  if (left == ' ') {
    i += 1;
    left = myString[i];
  }
  if (right == ' ') {
    j -= 1;
    right = myString[j];
  }
  if (left != right) return false;
  else return (isPalindrome(myString, i + 1, j - 1));
}
int main() {
  string myString;
  getline (cin, myString);
  cout << boolalpha << isPalindrome(myString, 0, myString.length() - 1);
  return 0;
}