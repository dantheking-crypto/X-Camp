//
//  main.cpp
//  bubblesortswaps
//
//  Created by Daniel Zhu on 6/27/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
using namespace std;
inline void swaptwo (int arr[], int first, int second) {
  int temp = arr[first];
  arr[first] = arr[second];
  arr[second] = temp;
}
int bubblesort(int arr[], int length) {
  int swaps = 0;
  for (int i = 0; i < length - 1; i++) {
    bool sorted = true;
    for (int j = 0; j < length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swaptwo(arr, j, j + 1);
        swaps++;
        sorted = false;
      }
    }
    if (sorted) break;
  }
  return swaps;
}
int main() {
  int length;
  cin >> length;
  int arr[length];
  for (int i = 0; i < length; i++) {
    cin >> arr[i];
  }
  cout << bubblesort(arr, length);
  
  return 0;
}
