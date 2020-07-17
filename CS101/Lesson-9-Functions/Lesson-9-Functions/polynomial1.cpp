//
//  polynomial1.cpp
//  Lesson-9-Functions
//
//  Created by Daniel Zhu on 6/14/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

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
