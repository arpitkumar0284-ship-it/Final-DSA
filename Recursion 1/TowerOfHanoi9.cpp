#include<iostream>
using namespace std;
void ToH(int N, char s, char m, char d)
{
    if(N==1){
    cout<<s<<"-->"<<d<<"\n";

    }
    else{
        ToH(N-1,s,d,m);
        cout<<s<<"-->"<<d<<"\n";
        ToH(N-1,m,s,d);
    }
}
int main()
{
    ToH(3,'S','M','D'); 
}
