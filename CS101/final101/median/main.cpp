//
//  main.cpp
//  median
//
//  Created by Daniel Zhu on 6/27/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
using namespace std;
inline void swap (int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
void insertionsort (int arr[], int length) {
  for (int i = 1; i < length; i++) {
    int current = i;
    while (current > 0) {
      if (arr[current] > arr[current - 1]) break;
      swap (arr[current], arr[current - 1]);
      current--;
    }
  }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    if (n % 2 == 0) cout << (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    else cout << arr[n / 2];
    return 0;
}
