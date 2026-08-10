#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5,99);

    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> vec1(3,10);
    for(int i:vec1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> vec2={1,2,3,4,5};
    vec1=vec2;

    for(int j:vec2)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    v.erase(v.begin());
    for(int j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    v.erase(v.begin(),v.begin()+2);
    for(int j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    v.insert(v.end(),7);
    v.insert(v.begin()+2,9);

    for(int j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<v.capacity()<<endl;

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;
    for(rit=v.rbegin();rit!=v.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<endl;

    return 0;
}
