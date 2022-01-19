class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        long long int mod = 1e9 + 7;
        vector<long long int>temp(n+1,0);
    for(int i=1;i<=m;i++){
        vector<long long int>temp2(n+1);
        if(i==1){temp2[0]=0; temp2[1]=1;}
        else temp2[0]=0;
        for(int j=1;j<=n;j++){
            if(i==1 && j==1) continue;
            temp2[j]=temp2[j-1]%mod+temp[j]%mod;
         }
        temp=temp2;
    }

    return temp[n]%mod;
    }
};
