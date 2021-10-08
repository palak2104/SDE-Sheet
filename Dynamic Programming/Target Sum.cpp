//https://leetcode.com/problems/target-sum/
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
     int sum =0,n = nums.size();
        
        for(auto x: nums)sum+=x;
		//make -ve target to +ve
        if(target<0)
            target = -(target);
        int s = (target + sum)/2;
        
        if((target+sum) % 2 != 0)
            return 0;  
        

        
         int dp[n+1][s+1];
        
     
      for(int i=1;i<s+1;i++) dp[0][i]=0;
      for(int i=0;i<n+1;i++) dp[i][0]=1;
        
        for(int i =1; i<n+1;i++){
            
            for(int j =0; j<s+1;j++){
                
                if(nums[i-1]<=j){
                    
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
                
                else{
                    
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][s];   
    }
};
