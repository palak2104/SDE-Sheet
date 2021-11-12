class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
     queue<pair<pair<int,int>,int>>q;
        int n=a.size();
        int m;
     for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
          m=a[i].size();
          if(a[i][j]==2)
          q.push({{i,j},0});
        }   
       
    }
    int time=0;
    while(!q.empty()){
        int i=q.front().first.first;
        int j=q.front().first.second;
        time=q.front().second;
        q.pop();
        int di[4]={-1,0,1,0};
        int dj[4]={0,1,0,-1};
        for(int x=0;x<4;x++){
            if(i+di[x]>=0 and i+di[x]<n and j+dj[x]>=0 and j+dj[x]<m and a[i+di[x]][j+dj[x]]==1){
                a[i+di[x]][j+dj[x]]=2;
                q.push({{i+di[x],j+dj[x]},time+1});
            }
        }
    }
        for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
          if(a[i][j]==1)
          return -1;
        }   
       
    }
    return time;
    }
};
