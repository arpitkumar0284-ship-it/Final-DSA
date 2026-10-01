#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cout << "Enter number: ";
    cin >> num;

    while(num.back() == '0') {
        num.pop_back();
    }
    cout << "Output: " << num << endl;
    return 0;
}