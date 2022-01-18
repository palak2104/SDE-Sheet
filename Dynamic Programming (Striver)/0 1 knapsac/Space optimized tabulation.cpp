int knapsack(vector<int> wt, vector<int>arr, int n, int W) 
{
	// Write your code here
    vector<int>temp(W+1,0);
       for(int i=1;i<=n;i++){
           vector<int>temp2;
           temp2.push_back(0);
           for(int j=1;j<=W;j++){
               if(wt[i-1]<=j){
                   temp2.push_back(max(arr[i-1]+temp[j-wt[i-1]],temp[j]));
               }
               else temp2.push_back(temp[j]);
           }
        
           for(int j=1;j<=W;j++){
               temp[j]=temp2[j];
           }
       }
    return temp[W];  
}
