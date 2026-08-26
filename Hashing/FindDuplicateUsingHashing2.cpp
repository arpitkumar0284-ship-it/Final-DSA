#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    bool hasDuplicate = false;

    for (auto itr : m)
    {
        cout << itr.first << " : " << itr.second << endl;
        if (itr.second > 1)
            hasDuplicate = true;
    }

    if (hasDuplicate)
        cout << "duplicate" << endl;
    else
        cout << "not duplicate" << endl;

    return 0;
}
