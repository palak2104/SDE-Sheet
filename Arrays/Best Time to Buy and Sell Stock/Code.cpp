class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit=INT_MIN;
        int largest=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(largest<arr[i]){
                largest=arr[i];
            }
            else{
                profit=max(profit,largest-arr[i]);
            }
        }
        if(profit==INT_MIN) return 0;
        return profit;
    }
};
