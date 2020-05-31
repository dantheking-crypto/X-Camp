#include <iostream>
#include <string>
using namespace std;

int main() {
  string strings[4];
  int letternum[26];
  for (int i = 0; i < 26; i++) {
    letternum[i] = 0;
  }
  for (int i = 0; i < 4; i++) {
    getline(cin, strings[i]);
    for (int j = 0; j < strings[i].length(); j++) {
      if ((int)((strings[i])[j]) >= 65 && (int)((strings[i])[j]) <= 132) letternum[(int)((strings[i])[j]) - 65]++;
    }
  }
  int mostletters = letternum[0];
  int mostindex = 0;
  for (int i = 1; i < 26; i++) {
    if (letternum[i] > mostletters) {
      mostletters = letternum[i];
      mostindex = i;
    }
  }
  for (int i = 0; i < mostletters; i++) {
    for (int j = 0; j < 26; j++) {
      if (letternum[j] >= mostletters - i) cout << "*" << " ";
      else cout << "  ";
    }
    cout << endl;
  }
  cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n";
  return 0;
}