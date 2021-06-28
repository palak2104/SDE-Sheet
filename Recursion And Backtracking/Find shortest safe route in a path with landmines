#include <bits/stdc++.h>

using namespace std;

int arr[100][100];
int visited[100][100]={0};
int ans=INT_MAX;
bool isValid(int i,int j,int row,int col){
    if(i<0 || j<0 || i>=row || j>=col)
    return false;
    return true;
}
bool isSafe(int i,int j,int row,int col){
    if(isValid(i,j+1,row,col)&&arr[i][j+1]==0)
    return false;
    if(isValid(i+1,j,row,col)&& arr[i+1][j]==0)
    return false;
    if(isValid(i-1,j,row,col)&& arr[i-1][j]==0)
    return false;
    if(isValid(i,j-1,row,col)&&arr[i][j-1]==0)
    return false;
    return true;
}
void ShortestPath(int row,int col,int i,int j,int len){
    if(j==col-1){
        ans=min(ans,len);
        return;
    }
    if (len > ans)
        return;
 
    visited[i][j]=1;
    if(isSafe(i,j+1,row,col)&& isValid(i,j+1,row,col) && !visited[i][j+1] && arr[i][j+1]!=0){
        ShortestPath(row,col,i,j+1,len+1);
    }
    if(isSafe(i+1,j,row,col)&& isValid(i+1,j,row,col) && !visited[i+1][j] && arr[i+1][j]!=0){
        ShortestPath(row,col,i+1,j,len+1);
    }
    if(isSafe(i-1,j,row,col)&& isValid(i-1,j,row,col) && !visited[i-1][j]&& arr[i-1][j]!=0){
        ShortestPath(row,col,i-1,j,len+1);
    }
    if(isSafe(i,j-1,row,col)&& isValid(i,j-1,row,col) && !visited[i][j-1] && arr[i][j-1]!=0){
        ShortestPath(row,col,i,j-1,len+1);
    }
    visited[i][j]=0;
    return;
    
    
}
int main()
{
  int row,col;
  cin>>row>>col;
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          cin>>arr[i][j];
      }
  }
  int minans=INT_MAX;

  for(int i=0;i<row;i++){
  if(isSafe(i,0,row,col)){
  ShortestPath(row,col,i,0,0);
  minans=min(minans,ans);
  }
  }
  if(minans!=INT_MAX)
  cout<<minans;
  else cout<<-1;
    return 0;
}
