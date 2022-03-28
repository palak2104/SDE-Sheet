class LRUCache {
public:
    int n;
    int cap;
    list<int>l;
    map<int,int>m;
    map<int,list<int>::iterator>a;
    
    LRUCache(int capacity) {
    cap=capacity;
    n=0;
    }
    
    int get(int key) {
    if(m.find(key)==m.end()) return -1;
    list<int>::iterator it=a[key];
    l.erase(it);
    a.erase(key);
    l.push_front(key);
    a[key]=l.begin();
    return m[key];
    }
    
    void put(int key, int value) {
    if(m.find(key)!=m.end())  {
    l.erase(a[key]);
    a.erase(key);
    m.erase(key);
    n--;
    }
    if(n==cap){
    int k=l.back();
    l.erase(a[k]);
    a.erase(k);
    m.erase(k);
    n--;
    }
    l.push_front(key);
    m[key]=value;
    a[key]=l.begin();
    n++;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 *https://leetcode.com/problems/lru-cache/submissions/
 */
