#include <bits/stdc++.h>

using namespace std;

int steps(int n){
    if(n==0)
    return 1;
    else if(n<0)
    return 0;
    
    int a=steps(n-1);
    int b=steps(n-2);
    int c=steps(n-3);
    
    return a+b+c;
    
}
int main()
{
    int n;
    int count_num=0;
    cin>>n;
    cout<<steps(n);
    

    return 0;
}
