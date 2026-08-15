#include<iostream>
using namespace std;
void printoneton(int n)
{
    if (n==0) return; //base case;
    printoneton(n-1); //call
    cout<<n<<endl;   //kaam

}
int main()
{
    printoneton(8);
}