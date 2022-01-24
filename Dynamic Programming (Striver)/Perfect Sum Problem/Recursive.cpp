#include <bits/stdc++.h>

using namespace std;
int func(int i,int sum,int arr[]){
    if(i==-1){
    if(sum==0) return 1;
    return 0;
    }
   
        
    int left=0,right=0;
    if(sum-arr[i]>=0)
    left=func(i-1,sum-arr[i],arr);
    right=func(i-1,sum,arr);
    return left+right;
}
int main()
{
  int n;
  cin>>n;
  int arr[100];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int sum;
  cin>>sum;
  cout<<func(n-1,sum,arr);

    return 0;
}
