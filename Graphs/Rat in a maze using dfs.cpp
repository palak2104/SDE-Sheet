class Solution{
    public:
    int vis[1000][1000];
    void dfs(int i,int j,int n,string s,vector<vector<int>>&m,vector<string>&res){
        if(i>=n || i<0 || j>=n || j<0 || vis[i][j]==1 || m[i][j]==0)
        return;
        if(i==n-1 && j==n-1){
            res.push_back(s);
            return;
        }
        vis[i][j]=1;
        dfs(i+1,j,n,s+"D",m,res); 
        dfs(i,j-1,n,s+"L",m,res); 
        dfs(i,j+1,n,s+"R",m,res); 
        dfs(i-1,j,n,s+"U",m,res); 
        vis[i][j]=0;
        return;
        
    }
    vector<string> findPath(vector<vector<int>>&m, int n) {
        // Your code goes here
        vector<string>res;
       // vector<vector<int>>vis(n,vector<int>(n));
    //   int vis[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vis[i][j]=0;
        }
    }
        
        if(m[0][0]==0 || m[n-1][n-1]==0)
        return res;
        
        dfs(0,0,n,"",m,res);
        return res;
    }
};

    
