class Solution{
    int func(int i,int sum,int coins[]){
        if(i==-1){
            if(sum==0) return 0;
            return 1e8;
        }
        int pick=1e8;
        if(sum-coins[i]>=0)
        pick=1+func(i,sum-coins[i],coins);
        int npick=func(i-1,sum,coins);
        return min(pick,npick);
    }
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    return func(M-1,V,coins);
	} 
	  
};
