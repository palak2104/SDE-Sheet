class MyHashMap {
public:
    vector<list<pair<int,int>>>arr;
    int size;
    MyHashMap() {
    size=1e6+1;
    arr.resize(size);
    }
    
    void put(int key, int value) {
    if(get(key)==-1){
    int x=key%size;
    arr[x].push_back({key,value});
    } 
    else{
    int x=key%size;
    for(auto i=arr[x].begin();i!=arr[x].end();i++){
    pair<int,int> temp=*i;
    if(temp.first==key){ temp.second=value; *i=temp;}
    }    
    }
    }
    
    int get(int key) {
    int x=key%size;
    for(auto i=arr[x].begin();i!=arr[x].end();i++){
    pair<int,int> temp=*i;
    if(temp.first==key) return temp.second;
    }
    return -1;
    }
    
    void remove(int key) {
    if(get(key)!=-1){
    int x=key%size;
    for(auto i=arr[x].begin();i!=arr[x].end();i++){
    pair<int,int> temp=*i;
    if(temp.first==key){
        arr[x].erase(i);
        break;
    }
    }    
    }    
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
//Problem Link: https://leetcode.com/problems/design-hashmap/
