class Solution {
    void combination(int ind,vector<int>&arr,int target,vector<int>&res,vector<vector<int>>&fres){
        if(ind==arr.size()){
            if(target==0){
                fres.push_back(res);
            }
            return;
        }
        if(target>=arr[ind]){
            res.push_back(arr[ind]);
            combination(ind,arr,target-arr[ind],res,fres);
            res.pop_back();
        }
        combination(ind+1,arr,target,res,fres);
        return;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        vector<int>res;
        vector<vector<int>>fres;
        combination(0,arr,target,res,fres);
        return fres;
    }
};
