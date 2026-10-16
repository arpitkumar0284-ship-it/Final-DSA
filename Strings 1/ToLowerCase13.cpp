#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    cout << s;

    return 0;
}