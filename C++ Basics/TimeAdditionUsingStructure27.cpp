#include<iostream>
using namespace std;
struct Time
{
    int h;
    int m;
    int s;
};
  int main()
  {
    Time T1,T2,T3;
    cin>>T1.h>>T1.m>>T1.s;
    cin>>T2.h>>T2.m>>T2.s;
    T3.s =T1.s + T2.s;
    T3.m =T1.m + T2.m;
    T3.h =T1.h + T2.h;

    T3.m= T3.m +T3.s/60;
    T3.s =T3.s%60;
    T3.h =T3.h + T3.m/60;
    T3.m =T3.m % 60;
    cout << "Time addition: " << T3.h << ":" << T3.m << ":" << T3.s;

  }