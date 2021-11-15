#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,source,end;
	cin >> n >> m;
	vector<pair<int,int> > arr[n+1]; 	

	int a,b,wt;
	for(int i = 0; i<m ; i++){
		cin >> a >> b >> wt;
		arr[a].push_back({b,wt});
		arr[b].push_back({a,wt});
	}	
	
	cin >> source;
	cin>>end;
	vector<int>parent(n,-1);
	parent[source]=source;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
	vector<int> distTo(n+1,INT_MAX); 
	
	distTo[source] = 0;
	pq.push({0,source});	
	
	while( !pq.empty() ){
		
		int node = pq.top().second;
		pq.pop();
		
	
		for(auto it:arr[node]){
			if( distTo[it.first] > distTo[node] + it.second){
			    parent[it.first]=node;
				distTo[it.first] = distTo[node] + it.second;
				pq.push({distTo[it.first], it.first});
			}
		}
		
	}
	vector<int>ans;
	int i=end;
	ans.push_back(i);
	while(i!=source){
	    i=parent[i];
	    ans.push_back(i);
	}
	reverse(ans.begin(),ans.end());
	for(auto it:ans)
	cout<<it<<" ";
	return 0;
}
