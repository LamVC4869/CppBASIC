#include <iostream>

using namespace std;

int main () {
    string s; char c; int result = -1;
    getline (cin, s); cin >> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            result = i;
            break;
        }
    }
    
    cout << result;

    return 0;
}