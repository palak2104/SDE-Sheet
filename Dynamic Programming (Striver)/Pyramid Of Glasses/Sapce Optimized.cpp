#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,t;
   cin>>n>>t;
   int glass=pow(2,n);
   int cap=t*pow(2,n);
   int count=0;
   vector<int>temp(n+1,0);
   temp[0]=cap;
   for(int i=1;i<=n;i++){
       vector<int>temp2(n+1,0);
       for(int j=0;j<n;j++){
           if(temp[j]>=glass){
               int capacity=temp[j]-glass;
               count++;
               if(capacity!=0){
                   temp2[j]+=capacity/2;
                   temp2[j+1]+=capacity/2;
               }
           }
       }
       temp=temp2;
   }
   cout<<count;
   return 0;
}
