#include <bits/stdc++.h>
using namespace std;
string kthper(int n,int k){
    vector<int>arr;
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
        arr.push_back(i);
    }
    arr.push_back(n);
    k--;
    string s="";
    while(true){
       s+=to_string(arr[k/fact]);
       arr.erase(arr.begin()+k/fact);
       if(arr.size()==0) break;
       k=k%fact;
       fact=fact/arr.size();
    }
    return s;
}



int main()
{
   int n;
   cin>>n;
   int k;
   cin>>k;
   string str=kthper(n,k);
   cout<<str;

    return 0;
}
