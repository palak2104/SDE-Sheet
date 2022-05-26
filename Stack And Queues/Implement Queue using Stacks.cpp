class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size()!=0){
            int a=s1.top();
            s1.pop();
            s2.push(a);
        }
        s1.push(x);
        while(s2.size()!=0){
            int a=s2.top();
            s2.pop();
            s1.push(a);
        }
    }
    
    int pop() {
       int a=s1.top();
       s1.pop();
       return a;
    }
    
    int peek() {
     return s1.top();   
    }
    
    bool empty() {
       if(s1.size()==0) return true;
       return false;
    }
};
