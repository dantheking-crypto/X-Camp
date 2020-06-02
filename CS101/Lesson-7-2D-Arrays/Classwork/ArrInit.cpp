#include <iostream>
using namespace std;
int main() {
  int a[3][4] = {
    {8, 2, 6, 5}, 
    {6, 3, 1, 0},
    {8, 7, 9, 6}
  };
  int b[3][3];
  int currentnum = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      b[i][j] = currentnum;
      currentnum += 2;
    }
  }
  return 0;
}