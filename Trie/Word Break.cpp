//https://practice.geeksforgeeks.org/problems/d857113143f69fab217cf5dab978535542f3cbb1/1#
#include <bits/stdc++.h>

using namespace std;
class trie{
    public:
    bool isend;
    trie* child[26];
    trie(){
        isend=false;
        memset(child,0,sizeof(child));
    }
};
trie*root;
void insert(string str){
  trie* cur=root;
  for(int i=0;i<str.length();i++){
    int index=str[i]-'a';
    if(cur->child[index]==NULL){
        cur->child[index]=new trie();
    }
    cur=cur->child[index];
  }
  cur->isend=true;
}
bool isPresent(string str){
 trie* cur=root;
  for(int i=0;i<str.length();i++){
    int index=str[i]-'a';
    if(cur->child[index]==NULL){
    return false;
    }
    else cur=cur->child[index];
  }
  return cur->isend;   
}
bool isfeasible(int ind,string str){
    if(ind==str.size())
    return true;
    for(int i=ind;i<str.size();i++){
        if(isPresent(str.substr(ind,i-ind+1))){
            if(isfeasible(i+1,str)) return true;
        }
    }
    return false;
}
bool wordBreak(vector<string>B,string A){
root=new trie();
        for(auto it:B){
        insert(it);
        }
        if(isfeasible(0,A))
        return 1;
        return 0;    
}
int main()
{
    int n;
    cin>>n;
    vector<string>arr;
    for(int i=0;i<n;i++){
    string x;
    cin>>x;
    arr.push_back(x);
    }
    string str;
    cin>>str;
    if(wordBreak(arr,str))
    cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
