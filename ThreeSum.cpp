class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>fres;
        if(n<3) return fres;
        sort(arr.begin(),arr.end());
        map<vector<int>,int>m;
        for(int i=0;i<n-2;i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            int target=0-arr[i];
            int low=i+1;
            int high=n-1;
            while(low<high){
                int sum=arr[low]+arr[high];
                if(sum==target){
                    vector<int>res;
                    res.push_back(0-target);
                    res.push_back(arr[low]);
                    res.push_back(arr[high]);
                    fres.push_back(res);
                    while (low < high && arr[low] == arr[low+1]) low++;
                    while (low < high && arr[high] == arr[high-1]) high--;
                    low++;
                    high--;
                }
                else if(target<sum) high--;
                else low++;
            }
        }
        return fres;
    }
};
