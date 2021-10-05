#include<bits/stdc++.h>
using namespace std;

class trie{
    public:
    trie *child[129];
    trie(){
        memset(child,0,sizeof(child));
    }
};

trie* root;

int distictStrings(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        string str = s.substr(i, s.size()-i);
        int n=str.length();
        trie* cur=root;
        for(int j=0;j<n;j++){
            int index=str.at(j);
            if(cur->child[index]==NULL){
             cur->child[index]=new trie();
             count++;
            }
            cur=cur->child[index];
        }
    }
    return count;
}

int main()
{
 root=new trie();   
 string str;
 cin>>str;
 cout<<distictStrings(str);
 return 0;
}
