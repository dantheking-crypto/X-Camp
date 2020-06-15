/*

Description
In a dark and stormy night, you are given a explosion mission. Given a n*m area, where some places have a wall. If you put a bomb at position (i,j), then the wall in i-th row and j-th column would all be destroyed. Now you want to know whether all the walls can be destroyed using only one bomb.

 

Input
The first line is an integer T representing the number of groups of testing data.

For each group of testing data, the first line enters two numbers n, m representing a n*m area.
The next n lines, each line contains m characters of '*' representing the wall and '.' representing space.  1<=n,m<=1000

 

Output
In the first line, there's way to destroy all walls by only one bomb, output "YES", otherwise output "NO".

If the answer is "YES", please output the positon of bomb x,y in the second line separated by space.

Notice:If you have several ways to solve the problem, output the one who has the smallest row number, then, if there are still several ways, output the one which has the smallest column number. 

*/

#include <iostream>
using namespace std;
char minefield[1000][1000];
bool checkwall(int rownum, int colnum, int row, int col) {
  for (int i = 0; i < rownum; i++) {
    for (int j = 0; j < colnum; j++) {
      if (minefield[i][j] == '*') {
        if (i != row && j != col) return false;
      }
    }
  }
  return true;
}
int main() {
  int queries;
  cin >> queries;
  for (int times = 0; times < queries; times++) {
    int rownum, colnum;
    cin >> rownum >> colnum;
    for (int i = 0; i < rownum; i++) {
      for (int j = 0; j < colnum; j++) {
        cin >> minefield[i][j];
      }
    }
    bool found = false;
    for (int i = 0; i < rownum; i++) {
      for (int j = 0; j < colnum; j++) {
        if (checkwall(rownum, colnum, i, j)) {
          cout << "YES" << endl << i + 1 << " " << j+ 1 << endl;
          found = true;
          break;
        }
      }
      if (found) break;
    }
    if (!found) cout << "NO" << endl;
  }
  return 0;
}
