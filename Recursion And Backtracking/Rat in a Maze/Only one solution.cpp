#include <bits/stdc++.h>

using namespace std;

bool rat(int **arr,string str,int n,int i,int j){
    if(i==n-1 && j==n-1){
    cout<<str;
    return true;
    }
    if(arr[i+1][j]==1){
      str.push_back('d');
      if(rat(arr,str,n,i+1,j))  return true;
      str.pop_back();
    }
    if(arr[i][j+1]==1){
      str.push_back('r');
      if(rat(arr,str,n,i,j+1))  return true;
      str.pop_back();
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    string str="";
    if(arr[0][0]==1)
    rat(arr,str,n,0,0);
   
    return 0;
}
