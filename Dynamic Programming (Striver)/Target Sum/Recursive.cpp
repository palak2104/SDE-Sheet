class Solution {
public:

    int get(vector<int>& nums,int i,int S,int sum)
    {
        if(i==nums.size()){
            if(sum==S) return 1;
            return 0;
        }

    
        int p1=get(nums,i+1,S,sum+nums[i]);
        int p2=get(nums,i+1,S,sum-nums[i]);
        return p1+p2;
    }
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        
        return get(nums,0,S,0);
    }
};
