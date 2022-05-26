class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(q1.size()!=0){
            int x=q1.front();
            q1.pop();
            q2.push(x);
        }
        swap(q1,q2);
    }
    
    
    int pop() {
       int x=q1.front();
       q1.pop(); 
       return x;
    }
    
    int top() {
        int x=q1.front();
        return x;
    }
    
    bool empty() {
      if(q1.size()==0) return true;
      return false;  
    }
};
