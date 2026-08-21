#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     int n1;
     int n2;
     cin>>n1>>n2;
     int k;
     cin>>k;
    string s1;
    //getline(cin,s1);
    string s2;
    //getline(cin,s2);
    cin>>s1;
    cin>>s2;

    // right rotation of s1 by k
    string rr_s=s1.substr(n1-k,k)+s1.substr(0,n1-k);

    // left rotation of s2 by k
    string lr_s=s2.substr(k,n2-k)+s2.substr(0,k);

    // combination of the both rotated string
    string s3=rr_s + lr_s;
    int l3=s3.length();
    int i=0;
    int j=l3-1;
    bool flag =true;
    while(i<j)
    {
        if(s3[i]==s3[j])
        {
            i++;
            j--;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<s3<<" "<<"True";
    }
    else{
        cout<<s3<<" "<<"False";
    }


}