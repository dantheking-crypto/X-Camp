//
//  main.cpp
//  strangesort
//
//  Created by Daniel Zhu on 6/27/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//
/*
 Description
 Given n numbers a1,a2,a3,...,an, you are asked to arrange them into a non decreasing sequence, which means that any two adjacent two numbers the later one is not smaller than the former one. The rules is that at each step you can only move 1 number from the end to the front to make a1,a2,a3,...,an into an,a1,a2,a3,...,an-1.

 Now please tell us the minimum number of operations needed to put a sequence into a non decreasing sequence.

 Input
 The first line is an integer n.  2<=n<=105  1<=ai<=105
 The second line contains n integers.
 Output
 If you can find a way, please output the minimum number of operations.
 If not possible, output -1.
 Sample Input
 6
 4 5 6 1 2 3
 ​Sample Output
 3
 */
#include <iostream>
using namespace std;
bool checksorted (int arr[], int start, int end) {
  for (int i = start + 1; i <= end; i++) {
    if (arr[i] < arr[i - 1]) return false;
  }
  return true;
}
 
 
int main() {
    int length;
    cin >> length;
    int arr[length];
 
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    if (checksorted(arr, 0, length - 1)) {
      cout << 0;
      return 0;
    }
    int divider = -1;
    for (int i = 0; i < length - 1; i++) {
      if (arr[i] > arr[i + 1]) {
 
        if (divider == -1) divider = i;
        else {
          cout << -1;
          return 0;
        }
      }
    }
    if (!checksorted(arr, divider + 1, length - 1)) {
      cout << -1;
    }
    else if (checksorted(arr, divider + 1, length - 1) && arr[length - 1] > arr[0]) {
      cout << -1;
    }
    else if (divider == -1) cout << 0;
    else cout << length - 1 - divider;
    return 0;
}
