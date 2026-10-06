#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countPrefixSuffixPairs(vector<string>& words)
{
    int n = words.size();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            string s1 = words[i];
            string s2 = words[j];

            int l1 = s1.size();
            int l2 = s2.size();

            if(l1 > l2)
            {
                continue;
            }

            bool pref_check = true;

            for(int k = 0; k < l1; k++)
            {
                if(s1[k] != s2[k])
                {
                    pref_check = false;
                    break;
                }
            }

            bool suff_check = true;

            for(int k = 0; k < l1; k++)
            {
                if(s1[k] != s2[l2 - l1 + k])
                {
                    suff_check = false;
                    break;
                }
            }

            if(pref_check == true && suff_check == true)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);

    for(int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    int ans = countPrefixSuffixPairs(words);

    cout << ans << endl;

    return 0;
}