class MyHashSet {
public:
    vector<list<int>>arr;
    int size;
    MyHashSet() {
    int size=1e6+1;
    arr.resize(size);
    }
    list<int>::iterator search(int key){
        int x=key%size;
        for(auto i=arr[x].begin();i!=arr[x].end();i++){
            if(*i==key)
            return i;
        }
        return arr[x].end();
    }
    void add(int key) {
    if(!contains(key)){
    int x=key%size;
    arr[x].push_back(key);
    }
    }
    
    void remove(int key) {  
    if(contains(key)){
    int x=key%size;
    arr[x].erase(search(key));
    }
    }
    
    bool contains(int key) {
    int i=key%size;  
    if(search(key)!=arr[i].end())
    return true;
    return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
//Problem Link: https://leetcode.com/problems/design-hashset/
