#include <bits/stdc++.h>
using namespace std;
string reformat(string s) {
    int n = s.size();
    string str = "";
    vector<char> alpha;
    vector<char> num;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            alpha.push_back(s[i]);
        } else {
            num.push_back(s[i]);
        }
    }

    int n1 = alpha.size();
    int n2 = num.size();

    if (n1 == n2) {
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            str.push_back(alpha[i]);
            str.push_back(num[j]);
            i++;
            j++;
        }
    }
    else if (n1 == n2 + 1) {
        int i = 0, j = 0;

        while (j < n2) {
            str.push_back(alpha[i]);
            str.push_back(num[j]);
            i++;
            j++;
        }

        str.push_back(alpha[i]);
    }
    else if (n2 == n1 + 1) {
        int i = 0, j = 0;

        while (i < n1) {
            str.push_back(num[i]);
            str.push_back(alpha[j]);
            i++;
            j++;
        }

        str.push_back(num[j]);
    }
    else {
        return "";
    }

    return str;
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string ans = reformat(s);
    cout << "Reformatted string: " << ans << endl;
    return 0;
}
