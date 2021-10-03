#include <bits/stdc++.h>

using namespace std;
class trie{
    public:
    int isend;
    trie *child[26];
    trie(){
        isend=0;
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
    cur->isend++;
}
void deletion(string str){
    trie* cur=root;
    for(int i=0;i<str.size();i++){
    int index=str[i]-'a'-1;
     if(cur->child[index]==NULL){
     cout<<"There is no such string"<<endl;
     return;
     }
     else  cur=cur->child[index];
    }
     cur->isend= cur->isend-1;
     cout<<"String has been deleted"<<endl;
    return;
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
        deletion(s);
    }
    return 0;
}
