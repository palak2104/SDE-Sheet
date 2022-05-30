class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&arr, int target) {
       vector<vector<int>>fres;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n<4) return fres;
        if(arr.empty()) return fres;
        for(int i=0;i<n;i++){
            vector<int>res(4);
            int target3=target-arr[i];
        for(int j=i+1;j<n;j++){
            int target2=target3-arr[j];
        int low=j+1;
        int high=n-1;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum<target2) low++;
            else if(sum>target2) high--;
            else{
                res[0]=arr[i];
                res[1]=arr[j];
                res[2]=arr[low];
                res[3]=arr[high];
                fres.push_back(res);
                while(low<high && arr[low]==res[2]) ++low;
                while(low<high && arr[high]==res[3]) --high;
            }
        }
        while(j<n && arr[j+1]==arr[j]) ++j;
        }
        while(i<n && arr[i+1]==arr[i]) ++i;
        }
        return fres;
    }
};
