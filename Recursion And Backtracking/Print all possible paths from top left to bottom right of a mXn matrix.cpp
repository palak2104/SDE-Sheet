#include <bits/stdc++.h>

using namespace std;
int arr[1000][1000];
bool isSafe(int i,int j,int n,int m){
    if(i>n || i<0 || j>m || j<0)
    return false;
    return true;
}
void possiblePaths(int i,int j,int n,int m,vector<int>res,vector<vector<int>>&fres){
if(i==n && j==m){
fres.push_back(res);
return;
}
if(isSafe(i,j+1,n,m)){
res.push_back(arr[i][j+1]);
possiblePaths(i,j+1,n,m,res,fres);
res.pop_back();
}
if(isSafe(i+1,j,n,m)){
res.push_back(arr[i+1][j]);
possiblePaths(i+1,j,n,m,res,fres);
res.pop_back();
}
return;
}
int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
vector<vector<int>>fres;
vector<int>res;
res.push_back(arr[0][0]);
possiblePaths(0,0,n,m,res,fres);
for(auto it:fres){
    for(auto itr:it){
        cout<<itr<<" ";
    }
    cout<<endl;
}
return 0;
}
