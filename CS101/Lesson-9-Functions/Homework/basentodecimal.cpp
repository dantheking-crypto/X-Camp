#include <iostream>
using namespace std;
int main() {
    int base;
    cin >> base;
    string input;
    cin >> input;
    int currentpower = (int)(input.length());
    bool alreadyprinted = false;
    for (int i = 0; i < (int)(input.length()); i++) {
        currentpower--;
        if ((int)(input[i]) - '0' == 0) continue;
        if (i != 0 && alreadyprinted) cout << "+";
        cout << input[i] << "*" << base << "^" << currentpower;
        alreadyprinted = true;
    }
    cout << endl;
    return 0;
}
