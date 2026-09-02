#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> m = {{1,2}, {2,3}, {3,4}};

    for(auto it : m)
    {
        cout << it.first << "  " << it.second << endl;
    }

    return 0;
}