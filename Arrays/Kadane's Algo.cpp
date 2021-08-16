#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int sum=0;
    int maxi=INT_MIN;
    for(auto it:arr){
        sum=max(it,sum+it);
        maxi=max(sum,maxi);
    }
    cout<<maxi;
    return 0;
}
