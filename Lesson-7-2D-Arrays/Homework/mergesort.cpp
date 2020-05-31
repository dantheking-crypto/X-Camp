#include <iostream>
using namespace std;
int main() {
  int len1, len2;
  cin >> len1 >> len2;
  int arr1[len1];
  int arr2[len2];
  for (int i = 0; i < len1; i++) {
    cin >> arr1[i];
  }
  for (int i = 0; i < len2; i++) {
    cin >> arr2[i];
  }
  
  int aindex = 0;
  int bindex = 0;
  int least1 = arr1[aindex];
  int least2 = arr2[bindex];
  int newarr[len1 + len2];
  for (int i = 0; i < len1 + len2; i++) {
    if (least1 < least2) {
      newarr[i] = least1;
      if (aindex < len1 - 1) {
        aindex++;
        least1 = arr1[aindex];
      } 
      else least1 = arr2[len2 - 1];
    }
    else {
      newarr[i] = least2;
      if (bindex < len2 - 1) {
        bindex++;
        least2 = arr2[bindex];
      } 
      else least2 = arr1[len1 - 1];
    }
  }
  for (int i = 0; i < len1 + len2; i++) {
    cout << newarr[i] << " ";
  }
  return 0;
}