#include <bits/stdc++.h>

using namespace std;

int steps(int n, vector<int>&store){
    if(n==0)
    return 1;
    else if(n<0)
    return 0;
    
    if(store[n]!=0) return store[n];
    
    
    int a=steps(n-1,store);
    int b=steps(n-2,store);
    int c=steps(n-3,store);
    
    store[n]= a+b+c;
    return store[n];
    
}
int main()
{
    int n;
    int count_num=0;
    cin>>n;
    vector<int>store(n+1,0);
    cout<<steps(n,store);
    

    return 0;
}
