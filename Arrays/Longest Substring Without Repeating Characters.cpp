class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>arr(256,-1);
        int l=0;
        int r=0;
        int count=0;
        while(r<n){
          if(arr[s[r]]!=-1)
          l=max(l,arr[s[r]]+1);
            arr[s[r]]=r;
            count=max(count,r-l+1);
            r++;
        }
        return count;
    }
};
