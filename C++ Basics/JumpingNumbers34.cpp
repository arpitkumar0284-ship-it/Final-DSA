#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int k = 0; k <= x; k++) {
        string str = to_string(k);
        int i = 0, j = 1;
        bool ok = true;

        while (i < str.size() && j < str.size()) {
            int first_num = str[i] - '0';  
            int next_num = str[j] - '0';
            if (abs(first_num - next_num) == 1) {
                i++;
                j++;
            } else {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << k << " ";
        }
    }

    return 0;
}