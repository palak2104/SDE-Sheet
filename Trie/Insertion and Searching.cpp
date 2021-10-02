#include <bits/stdc++.h>

using namespace std;
class trie{
    public:
    bool isend;
    trie *child[26];
    trie(){
        isend=false;
        memset(child,0,sizeof(child));
    }
};
trie *root;
void insert(string str){
    trie* cur=root;
    for(int i=0;i<str.size();i++){
        int index=str[i]-'a'-1;
        if(cur->child[index]==NULL){
        cur->child[index]=new trie;
        }
        cur=cur->child[index];
    }
    cur->isend=true;
}
bool isPresent(string str){
    trie* cur=root;
    for(int i=0;i<str.size();i++){
    int index=str[i]-'a'-1;
     if(cur->child[index]==NULL)
     return false;
     else  cur=cur->child[index];
    }
    return cur->isend;
}
int main()
{
    root= new trie();
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        insert(str);
    }
    int x;
    cin>>x;
    while(x--){
        string s;
        cin>>s;
        if(isPresent(s))
        cout<<"String "<<s<<" is present inside array"<<endl;
        else cout<<"String "<<s<<" is not present inside array"<<endl;
    }
    return 0;
}
