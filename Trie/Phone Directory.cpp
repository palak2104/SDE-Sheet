class trie{
    public:
    vector<string>arr;
    trie*child[26];
    trie(){
        memset(child,0,sizeof(child));
    }
};
class Solution{
public:
trie* root;
void insert(string str){
    trie* cur=root;
    for(int i=0;i<str.size();i++){
        int index=str[i]-'a';
        if(cur->child[index]==NULL){
        cur->child[index]=new trie();    
        }
        cur->arr.push_back(str);
        cur=cur->child[index];
    }
}
vector<string>search(string x){
    trie* cur=root;
    vector<string>res;
    for(int i=0;i<x.length();i++){
    int index=x[i]-'a';
    if(cur->child[index]==NULL){
    res.push_back("0");
    return res;
    } 
    else cur=cur->child[index];
    }
    for(auto it:cur->arr)
    res.push_back(it);
    return res;
}
vector<vector<string>> displayContacts(int n, string contact[], string s)
{
trie* root=new trie();
for(int i=0;i<n;i++){
    insert(contact[i]);
}
vector<vector<string>>fres;
for(int i=0;i<s.length();i++){
    string x=s.substr(0,i+1);
    fres.push_back(search(x));
}
return fres;
}
};
