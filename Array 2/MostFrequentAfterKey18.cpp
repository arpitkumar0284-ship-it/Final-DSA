// Most Frequent Number After Key

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int mostFrequent(vector<int>& nums, int key)
{
    int n = nums.size();
    unordered_map<int, int> mp;

    for(int i = 0; i < n - 1; i++)
    {
        if(nums[i] == key)
        {
            mp[nums[i + 1]]++;
        }
    }

    int val = 0;
    int max_freq = 0;

    for(auto x : mp)
    {
        int freq = x.second;

        if(freq > max_freq)
        {
            max_freq = freq;
            val = x.first;
        }
    }

    return val;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    int ans = mostFrequent(nums, key);

    cout << "Most frequent number after key = " << ans << endl;

    return 0;
}