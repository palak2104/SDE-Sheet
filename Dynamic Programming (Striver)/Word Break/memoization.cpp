class Solution {
   unordered_set<string> uset;
bool findSubStr(string str,int i,vector<int>&dp){
    if(i==str.length())
    return true;
    if(dp[i]!=-1) return dp[i];
    //int mini=1e8;
    bool res=false;
    for(int len=1;len<=str.length()-i;len++){
        string s=str.substr(i,len);
        //cout<<s<<endl;
        if(uset.find(s)!=uset.end()){
            res=res || findSubStr(str,i+len,dp);
        }
    }
    
    return dp[i]=res;
}
public:
    bool wordBreak(string str, vector<string>& arr) {
        for (int i = 0; i < arr.size(); i++)
        uset.insert(arr[i]);
        vector<int>dp(str.length(),-1);
        int temp=findSubStr(str,0,dp);
        if(temp) return true;
        else return false;
    }
};
