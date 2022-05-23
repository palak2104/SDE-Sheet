class Solution{
	public:
	int minCoins(int coins[], int n, int V) 
	{ 
	    // Your code goes here
	    sort(coins,coins+n,greater<>());
	    int count=0;
	    for(int i=0;i<n;i++){
	        while(V>=coins[i]){
	            V-=coins[i];
	            count++;
	        }
	    }
	    return count;
	} 
	  
};
