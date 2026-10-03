#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int sum = 0;

        while (num > 0) {
            int last_dig = num % 10;
            sum = sum + last_dig;
            num /= 10;
        }

        ans.push_back(sum);
    }

    sort(ans.begin(), ans.end());

    cout << ans[0] << endl;

    return 0;
}