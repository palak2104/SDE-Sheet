//https://www.geeksforgeeks.org/find-all-shortest-unique-prefixes-to-represent-each-word-in-a-given-list/
#include<bits/stdc++.h>

using namespace std;
class trie{
    public:
    int fc;
    trie* child[26];
    trie(){
        fc=1;
        memset(child,0,sizeof(child));
    }
};
trie* root;
void insert(string str){
    trie* cur=root;
    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        if(cur->child[index]==NULL){
           cur->child[index]=new trie();
           cur=cur->child[index];
        }
        else{
            cur=cur->child[index];
            cur->fc++;
        }
    }
}
string findPath(string str){
    string st;
    trie* cur=root;
    for(int i=0;i<str.length();i++){
    int index=str[i]-'a';
    cur=cur->child[index];
    if(cur->fc==1){
    st.push_back(str[i]);
    return st;
    }
    else{
    st.push_back(str[i]);
    }
    }
    return st;
}
int main()
{
root=new trie();
int n;
cin>>n;
vector<string>arr;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    arr.push_back(str);
    insert(str);
}
for(int i=0;i<n;i++){
    string res=findPath(arr[i]);
    cout<<res<<" ";
}
return 0;
}
