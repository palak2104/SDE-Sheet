class Solution {
public:
    /**
     * @param maze: the maze
     * @param start: the start
     * @param destination: the destination
     * @return: the shortest distance for the ball to stop at the destination
     */
    int shortestDistance(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination) {
        // write your code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int n=maze.size();
        int m=maze[0].size();
        vector<int>dist(n*m+1);
        for(int i=0;i<=n*m+1;i++)
        dist[i]=INT_MAX;
        dist[start[0]*m+start[1]]=0;
        pq.push({0,{start[0],start[1]}});
        while(!pq.empty()){
        int dis=pq.top().first;
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        int dx[]={-1,1,0,0};
        int dy[]={0,0,1,-1};
        for(int ind=0;ind<4;ind++){
        int newx=x;
        int newy=y;
        int count=0;
        while(newx>=0 and newx<n and newy>=0 and newy<m and maze[newx][newy]==0){
        newx+=dx[ind];
        newy+=dy[ind];
        count++;
        }
        newx-=dx[ind];
        newy-=dy[ind];
        count--;
        if(dis+count<dis[newx][newy]){
        dist[newx][newy]=dis+count;
        pq.push({dis[newx][newy],{newx,newy}});
        }
        }
        }
        if(dist[destination[0]*m+destination[1]]==INT_MAX)
        return -1;
        return dist[destination[0]*m+destination[1]];
        
    }
};
