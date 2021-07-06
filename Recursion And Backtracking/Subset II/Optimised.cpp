class Solution {
    void Subset(int ind,vector<int>arr,vector<int>&res,vector<vector<int>>&fres){
        fres.push_back(res);
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i-1]==arr[i]) continue;
            res.push_back(arr[i]);
            Subset(i+1,arr,res,fres);
            res.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
      vector<int>res;
      vector<vector<int>>fres;
    Subset(0,arr,res,fres);
        return fres;
    }
};
