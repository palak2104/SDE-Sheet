class Solution {
    void dfs(string beginWord,string endWord,map<string,vector<string>>arr,vector<string>&res,vector<vector<string>>&fres){
      res.push_back(beginWord);
      if(beginWord==endWord){
          fres.push_back(res);
          return;
      }
      for(auto it:arr[beginWord]){
        dfs(it,endWord,arr,res,fres);  
      }
      res.pop_back();
    }
public:
    vector<vector<string>>findLadders(string beginWord, string endWord, vector<string>&dict) {
       vector<vector<string>>fres;
       vector<string>res;
       if(find(dict.begin(),dict.end(),endWord)==dict.end()) return fres;
       set<string>st(dict.begin(),dict.end());
       queue<string>q;
       q.push(beginWord);
       map<string,vector<string>>arr;
       while(!q.empty()){
           int n=q.size();
           for(int i=0;i<n;i++){
            string str=q.front();
            q.pop();
            for(int j=0;j<str.length();j++){
                string a=str;
                char ch=a[j];
            for(char c='a';c<='z';c++){
                a[j]=c;
                if(!st.count(a)) continue;
                else{
                    q.push(a);
                    st.erase(a);
                    arr[str].push_back(a);
                }
            }
            a[j]=ch;
            }
           }
       }
       dfs(beginWord,endWord,arr,res,fres);
       return fres;
    }
};
