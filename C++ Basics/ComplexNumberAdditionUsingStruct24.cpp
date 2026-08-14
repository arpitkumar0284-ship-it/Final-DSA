#include<iostream>
using namespace std;
struct Complex
{
    int real;
    int imag;
};
int main()
{
    Complex C1,C2,C3;
    cin>>C1.real>>C1.imag;
    cin>>C2.real>>C2.imag;
    C3.real = C1.real+ C2.real;
    C3.imag = C1.imag+ C2.imag;
    cout<<C3.real<<"+i"<<C3.imag;
}