#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cout<<"Enter the number of vertices and edges";
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=1;i<=e;i++)
    {
        cout<<"Enter the end-points of edges"<<i;
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }

}