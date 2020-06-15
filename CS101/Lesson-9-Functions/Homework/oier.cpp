/* 
There are many oiers stand in a row, such as “oier oier oier oier Oier oIer”. Now you have to judge whether this row of oier meets the following conditions:

First, there are no spaces at the end or the beginning. 

Second, there is only a space between two adjacent words.

Third, every word is “oier” and all lower-case.
*/


#include <iostream>
using namespace std;
int main() {
    int stringnum;
    cin >> stringnum;
    string myStrings[stringnum];
    string temp;
    getline(cin, temp);
    for (int i = 0; i < stringnum; i++) {
        getline(cin, myStrings[i]);
    }
    // A char array that keeps track of what the current character should be
    char characters[5] = {'o', 'i','e','r',' '};
    for (int i = 0; i < stringnum; i++) {
      string temp = myStrings[i];
      if (temp.length() % 5 != 4) {
        cout << "NO" << endl;
        continue;
      }
      bool isvalid = true;
        for (int i = 0; i < temp.length(); i++) {
          char currentcharacter = characters[i % 5];
          if (temp[i] != currentcharacter) {
            cout << "NO" << endl;
            isvalid = false;
            break;
          }
        }
        if (isvalid) cout << "YES" << endl;
    }
    return 0;
}
