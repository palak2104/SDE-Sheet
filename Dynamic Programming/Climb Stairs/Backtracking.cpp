#include <bits/stdc++.h>
int count_num;
using namespace std;

void steps(int sum,int target,int &count_num){
    if(sum==target){
        count_num++;
        return;
    }
    for(int i=1;i<=3;i++){
       
        if((sum+i)>target) break;
        steps(sum+i,target,count_num);
    }
    
    return;
}
int main()
{
    int n;
    int count_num=0;
    cin>>n;
    steps(0,n,count_num);
    cout<<count_num;

    return 0;
}
