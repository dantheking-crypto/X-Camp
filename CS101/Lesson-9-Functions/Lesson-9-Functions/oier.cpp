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
