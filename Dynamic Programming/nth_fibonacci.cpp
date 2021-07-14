#include <bits/stdc++.h>

using namespace std;
int fibo(int n,vector<int>&store){
    if(n==0  || n==1)
    return n;
    if(store[n]!=0)
    return store[n];
    store[n]=fibo(n-1,store)+fibo(n-2,store);
    return store[n];
}

int main()
{
   int n;
   cin>>n;
   vector<int>store(n+1,0);
   cout<<fibo(n,store);

    return 0;
}
