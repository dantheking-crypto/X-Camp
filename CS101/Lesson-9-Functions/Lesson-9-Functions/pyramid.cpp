//
//  pyramid.cpp
//  Lesson-9-Functions
//
//  Created by Daniel Zhu on 6/13/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int pyramidlen;
  while (cin >> pyramidlen) {
    int starcount = 1;
    int spacecount = pyramidlen - 1;
    bool descending = false;
    for (int i = 0; i < 2 * pyramidlen - 1; i++) {
      for (int j = 0; j < spacecount; j++) {
        cout << " ";
      }
      for (int j = 0; j < starcount; j++) {
        cout << "*";
      }
      if (spacecount > 0 && !descending) {
        spacecount--;
      }
      else {
        spacecount++;
        descending = true;
      }
       if (starcount < 2 * pyramidlen - 1 && !descending) {
        starcount += 2;
      }
      else {
        starcount -= 2;
        descending = true;
      }
      cout << endl;
    }
  }
  return 0;
}


