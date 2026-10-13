#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);

    for(int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    char separator;
    cin >> separator;

    vector<string> ans;

    for(int i = 0; i < n; i++)
    {
        string s = words[i];
        string str = "";
        int j = 0;

        while(j < s.length())
        {
            if(s[j] != separator)
            {
                str.push_back(s[j]);
                j++;
            }
            else
            {
                if(!str.empty())
                {
                    ans.push_back(str);
                    str = "";
                }
                j++;
            }
        }

        if(!str.empty())
        {
            ans.push_back(str);
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}