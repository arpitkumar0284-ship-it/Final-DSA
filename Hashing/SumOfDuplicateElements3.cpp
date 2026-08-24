#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);

    cout << "Array: ";
    for(auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    unordered_map<int, int> m;

    for(auto x : v)
    {
        m[x]++;
    }

    cout << "\nFrequency Map:\n";
    for(auto x : m)
    {
        cout << x.first << " : " << x.second << endl;
    }

    int sum = 0;

    for(auto x : m)
    {
        if(x.second > 1)
        {
            sum += x.first;
        }
    }

    cout << "\nSum of duplicate elements: " << sum << endl;

    return 0;
}