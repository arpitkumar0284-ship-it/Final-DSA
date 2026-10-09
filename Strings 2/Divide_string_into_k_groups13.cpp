
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> divideString(string s, int k, char fill)
{
    int n = s.size();
    int rem = n % k;

    vector<string> ans;

    // Last group ke extra characters complete karna
    if(rem != 0)
    {
        int extra = k - rem;

        for(int i = 0; i < extra; i++)
        {
            s.push_back(fill);
        }
    }

    // Ab har k size ka group banana
    for(int i = 0; i < s.size(); i += k)
    {
        string str = "";

        for(int j = i; j < i + k; j++)
        {
            str.push_back(s[j]);
        }

        ans.push_back(str);
    }

    return ans;
}

int main()
{
    string s;
    int k;
    char fill;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Enter fill character: ";
    cin >> fill;

    vector<string> ans = divideString(s, k, fill);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}