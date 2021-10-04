#include <bits/stdc++.h>

using namespace std;
class trie{
    public:
    trie *child[26];
    trie(){
        memset(child,0,sizeof(child));
    }
};
trie* root;
int distictStrings(string str){
    int count=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        trie* cur=root;
        for(int j=i;j<n;j++){
            int index=str[j]-'a'-1;
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
