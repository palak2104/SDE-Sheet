class Solution
{
    int func(int W, int wt[], int arr[], int n,int sum,int i){
     if(i==0){
         if(sum+wt[0]<=W)
         return arr[0];
         else return 0;
     }   
     int pick=INT_MIN;
     if(sum+wt[i]<=W){
     pick=arr[i]+func(W,wt,arr,n,sum+wt[i],i-1);
     }
     int npick=func(W,wt,arr,n,sum,i-1);
     return max(pick,npick);
    }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return func(W,wt,val,n,0,n-1);
    }
};
