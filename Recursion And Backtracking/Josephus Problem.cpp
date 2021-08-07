#include <bits/stdc++.h>

using namespace std;
void print(vector<int>&arr){
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
}
int Josephus(vector<int>&arr,int k,int index){
    if(arr.size()==1)
    return arr[0];
    index=(index+(k-1))%arr.size();
    arr.erase(arr.begin()+index);
    print(arr);
  
    Josephus(arr,k,index);
}
int main()
{
    vector<int>arr;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    cout<<Josephus(arr,k,0);

    return 0;
}
