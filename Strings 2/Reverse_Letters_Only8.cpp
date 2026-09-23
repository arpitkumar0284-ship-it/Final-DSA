#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(!isalpha(str[i]))
        {
            i++;
        }
        else if(!isalpha(str[j]))
        {
            j--;
        }
        else{
            swap(str[i],str[j]);
            i++;
            j--;
        }
    }
    cout<<str;
}