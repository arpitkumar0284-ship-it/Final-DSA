#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if (n==0) {
        cout<< 0 << endl;
        return 0;
    }
    if (n==1 || n==2) {
        cout<< 1 <<endl;
        return 0;
    }

    int t0 = 0;
    int t1 = 1;
    int t2 = 1;
    int next_t = 0;
    
    for (int i = 3; i <= n; i++) {
        next_t = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = next_t;
    }
    cout << t2 << endl;
    return 0;
}