class Solution {
   
void Permutation(int ind,vector<vector<int>>&res,vector<int>&arr){
    if(ind==arr.size()){
        res.push_back(arr);
    }
    for(int i=ind;i<arr.size();i++){
        swap(arr[i],arr[ind]);
        Permutation(ind+1,res,arr);
        swap(arr[i],arr[ind]);
    }
    return;
}
public:
    vector<vector<int>> permute(vector<int>& arr) {
    vector<vector<int>>res;
   
   
   Permutation(0,res,arr);
    return res;
    }
};
