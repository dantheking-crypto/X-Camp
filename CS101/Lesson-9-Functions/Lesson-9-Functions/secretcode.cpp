//
//  secretcode.cpp
//  Lesson-9-Functions
//
//  Created by Daniel Zhu on 6/14/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
using namespace std;
char letter2after (char);
int main() {
    string spam;
    cin >> spam;
    for (int i = 0; i < spam.length(); i++) {
      spam[i] = letter2after(spam[i]);
    }
    cout << spam;
    return 0;
}
char letter2after (char character) {
  int alphabet = (int)(character) - 97;
  char newchar = (char)(((alphabet + 2) % 26) + 97);
  return newchar;
}
