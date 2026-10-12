#include <iostream>
#include <vector>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0;
    int j = 0;
    int min = -1;
    bool found = false;

    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            min = nums1[i];
            found = true;
            break;
        }
    }

    if (found)
    {
        return min;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    cout << "Minimum common value: " << getCommon(nums1, nums2) << endl;

    return 0;
}