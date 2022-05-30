#include <bits/stdc++.h>

using namespace std;
double multiply(double a,int n){
    double res=1.0;
    for(int i=1;i<=n;i++){
       res=res*a; 
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    double low=1;
    double high=m;
    double eps=1e-6;
    while((high-low)>eps){
        double mid=(low+high)/2.0;
        if(multiply(mid,n)<m) low=mid;
        else high=mid;
    }
    printf("%5f",low);
    return 0;
}
