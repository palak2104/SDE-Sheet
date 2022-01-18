#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }

   n=v.size();
    vector<int> par(n);
    vector<int> key(n);
    vector<bool> visit(n,false);
    
    for(int i=0;i<n;i++)
    {
        key[i]=INT_MAX;
    }
    
    key[0]=0;
    par[0]=-1;
    
    for(int j=0;j<n-1;j++)
    {
        int u;
        int cost=INT_MAX;
        for(int i=0;i<n;i++)
        {
          if(!visit[i] && key[i] < cost)
          {
              cost=key[i];
              u=i;
          }
        }
        
        visit[u]=true;
        
        for(int s=0;s<n;s++)
        {
            if(v[u][s] && !visit[s] && v[u][s]<key[s])
            {
                par[s]=u;
                key[s]=v[u][s];
            }
        }
        
    }
    
    int total=0;
    for(int i=1;i<v.size();i++)
    {
        cout<<par[i]<<" - "<<i<<" ="<<v[i][par[i]]<<endl;
        total+=v[i][par[i]];
    }
    cout<<endl;
    cout<<"Minimum Cost="<<total<<endl;

    
    return 0;
}
