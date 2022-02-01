class Solution {
public:
    int minDeletions(string str) {
        unordered_map<char,int>mp;
        for(int i=0;i<str.length();i++)
        mp[str[i]]++;
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
       int count=0;
       while(!pq.empty()){
           int a=pq.top();
           pq.pop();
           if(pq.empty()) return count;
           if(a==pq.top()){
               if(a!=1)
               pq.push(a-1);
               count++;
           }
       }
    return count;
    }
};
