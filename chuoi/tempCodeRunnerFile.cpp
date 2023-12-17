#include <iostream>

using namespace std;

int main () {
    string s; char c; int count = 0; getline (cin, s);
    cin >> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count++;
            cout << i << " ";
        } 
        if (count == 0) {
            cout << -1;
            break;
        }
    }
    return 0;
}