class Solution 
{
    bool isSafe(int i,int j,int n){
      if(i<=0 || j<=0 || i>n || j>n )
      return false;
      return true;
    }
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code herevect
    int dist[n+1][n+1];
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dist[i][j]=-1;
        }
    }
	int a= KnightPos[0];
	int b= KnightPos[1];
	
	int t1= TargetPos[0];
	int t2= TargetPos[1];
	if(a==t1 && b==t2)
	return 0;
	
	queue<pair<int,int>>q;
	q.push({a,b});
	int dx[]={-2,-1,1,2,2,1,-1,-2};
	int dy[]={1,2,2,1,-1,-2,-2,-1};
	dist[a][b]=0;
	while(!q.empty()){
	int x=q.front().first;
	int y=q.front().second;
	q.pop();
	for(int i=0;i<8;i++){
	    if(isSafe(x+dx[i],y+dy[i],n)){
	       if(dist[x+dx[i]][y+dy[i]]==-1){
	       dist[x+dx[i]][y+dy[i]]==dist[x][y]+1;
	       q.push({x+dx[i],y+dy[i]});
	       }
	       
	    }
	}
	}
	return dist[t1][t2];
	}
};
