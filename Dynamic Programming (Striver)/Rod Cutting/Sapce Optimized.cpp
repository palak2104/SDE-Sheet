class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<int>temp(n+1,0);
        for(int i=1;i<=n;i++){
            vector<int>temp2(n+1,0);
            for(int j=1;j<=n;j++){
                if(j>=i)
                temp2[j]=max(price[i-1]+temp2[j-i],temp[j]);
                else temp2[j]=temp[j];
            }
            temp=temp2;
        }
        return temp[n];
    }
};
