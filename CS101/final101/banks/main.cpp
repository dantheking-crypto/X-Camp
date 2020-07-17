//
//  main.cpp
//  banks
//
//  Created by Daniel Zhu on 6/27/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int n;
  cin >> n;
  double principal = 100;
  for (int i = 0; i < n; i++) {
    principal *= 1.08;
  }
  cout << fixed << setprecision(2) << principal;
  return 0;
}
