#include <iostream>
#include <string>
using namespace std;
int main() {
    string num;
    cin >> num;

    int n = num.size();

    while(num[n - 1] == '0') {
        num.pop_back();
        n--;
    }

    cout << num;

    return 0;
}