#include <iostream>
using namespace std;
int main () {
  int lineNum, intersectNum;
  cin >> lineNum >> intersectNum;
  int totalAreas = 2 * intersectNum;
  int currentLines = intersectNum;
  for (int i = 0; i < lineNum - intersectNum; i++) {
    totalAreas += currentLines + 1;
    currentLines++;
  }
  cout << totalAreas;
  return 0;
}