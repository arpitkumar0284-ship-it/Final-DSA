#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int maxFreqSum(string s) {
    int n = s.size();
    unordered_map<char, int> vowel;
    unordered_map<char, int> cons;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            vowel[s[i]]++;
        } else {
            cons[s[i]]++;
        }
    }

    int max_v = 0;
    for (auto x : vowel) {
        max_v = max(max_v, x.second);
    }

    int max_c = 0;
    for (auto x : cons) {
        max_c = max(max_c, x.second);
    }

    return max_v + max_c;
}

int main() {
    string s;
    cin >> s;

    cout << maxFreqSum(s) << endl;

    return 0;
}