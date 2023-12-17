#include <iostream>

using namespace std;

int main () {
    string s; getline (cin, s);
    int k; cin >> k;
    cout << s[k - 1];
    return 0;
}