#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(98);
    v.push_back(72);
    v.push_back(88);
    v.push_back(54);
    v.push_back(81);
    v.push_back(65);
    v.push_back(32);
    v.push_back(79);
    v.push_back(35);
    v.push_back(12);
    v.push_back(99);
    v.push_back(73);
    v.push_back(86);
    v.push_back(55);
    v.push_back(82);
    v.push_back(65);
    v.push_back(32);
    v.push_back(79);
    v.push_back(35);
    cout<<"Size is:"<<v.size()<<endl;
    cout<<"Capacity is:"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is:"<<v.size()<<endl;
    cout<<"Capacity is:"<<v.capacity();
    
}