#include <bits/stdc++.h>

using namespace std;
class myStack{
  int top;
  int* arr;
  public:
  myStack(){
      int size=1000;
      arr=new int[size];
      top=-1;
  }
  void push(int x){
    top++;
    arr[top]=x;
  }
  void pop(){
      top--;
  }
  int Top(){
      return arr[top];
  }
  int size(){
      return top+1;
  }
};
int main()
{
myStack st;
st.push(9);
st.push(6);
st.push(1);
while(st.size()){
    cout<<st.Top()<<" ";
    st.pop();
}

    return 0;
}
