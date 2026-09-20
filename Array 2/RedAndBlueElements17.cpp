#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin>>n;
        vector<long long> A(n);
        long long totalSum = 0;

        for(int i = 0; i < n; i++) {
            cin >> A[i];
            totalSum += A[i];
        }

        sort(A.begin(), A.end());
        reverse(A.begin(), A.end());

        long long SR=0, SB=totalSum;
        long long CR=0, CB=n;
        long long maximum = 0;

        for(int i = 0; i < n; i++) {
            SR += A[i];
            SB -= A[i];
            CR++;
            CB--;
            long long value=(SR*CB) + (SB*CR);
            maximum=max(maximum,value);
        }
        cout<<maximum<<endl; 
}