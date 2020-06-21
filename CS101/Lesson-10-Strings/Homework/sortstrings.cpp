#include <iostream>
#include <string>
using namespace std;
bool islessthan (string first, string second) {
  int length = (first.length() > second.length()) ? second.length() : first.length();
  for (int i = 0; i < length; i++) {
    int letternum1 = (int)(first[i]);
    int letternum2 = (int)(second[i]);
    if (letternum1 < letternum2) {
       return true;
    }
    else if (letternum1 > letternum2) {
       return false;
    }
  }
  if (first.length() != second.length()) {
    if (first.length() > second.length()) return false;
    else return true;
  }
  else return true;
}
inline void swap (string& a, string& b) {
  string temp = a;
  a = b;
  b = temp;
}
void insertionsort (string arr[], int length) {
  for (int i = 1; i < length; i++) {
    int current = i;
    while (current > 0) {
      if (!islessthan(arr[current], arr[current - 1])) break;
      swap (arr[current], arr[current - 1]);
      current--;
    }
  }
}
int main() {
  int length;
  cin >> length;
  string arr[length];
  string temp;
  getline (cin, temp);
  for (int i = 0; i < length; i++) {
    getline (cin, arr[i]);
  }
  insertionsort(arr, length);
  for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;;
  }

  return 0;
}
