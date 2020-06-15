// Enter 5 lowercase letters, turn each letter to the letter 2 after it, e.g. a to c, c to e, z to b, and output them.
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
