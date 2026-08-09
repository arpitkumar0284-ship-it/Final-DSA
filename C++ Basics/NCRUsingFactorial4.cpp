#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,r;
    cin>>n>>r;
    if(r > n || r < 0)
   {
      cout << "Invalid Input";
      return 0;
   }
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr = (nfact)/(rfact*nrfact);
    cout<<ncr;
    return 0;


}