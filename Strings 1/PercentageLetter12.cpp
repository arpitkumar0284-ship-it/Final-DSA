
#include <bits/stdc++.h>
using namespace std;

int percentageLetter(string s, char letter) {
    int cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == letter) {
            cnt++;
        }
    }

    int ans = (cnt * 100) / s.size();
    return ans;
}

int main() {
    string s;
    char letter;

    cin >> s >> letter;

    cout << percentageLetter(s, letter) << endl;

    return 0;
}
