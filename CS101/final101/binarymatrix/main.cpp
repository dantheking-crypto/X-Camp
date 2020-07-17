//
//  main.cpp
//  binarymatrix
//
//  Created by Daniel Zhu on 6/27/20.
//  Copyright © 2020 Daniel Zhu. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int l, w;
    cin >> l >> w;
    int totals[w];
    for (int i = 0; i < w; i++) {
        totals[i] = 0;
    }
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < w; j++) {
            int temp;
            cin >> temp;
            totals[j] += temp;
        }
    }
    for (int i = 0; i < w; i++) {
        cout << totals[i] << endl;
    }
    return 0;
}
