#include <bits/stdc++.h>

using namespace std;
class myQueue{
int rear;
int front;
int *arr;
public:
myQueue(){
    rear=0;
    front=0;
    int size=1000;
    arr=new int[size];
}
int Front(){
    return arr[front];
}
void push(int x){
    arr[rear]=x;
    rear++;
}
void pop(){
    front++;
}
void print(){
    for(int i=front;i<rear;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int size(){
    return rear-front;
}
};
int main()
{
    myQueue q;
    q.push(4);
    q.push(9);
    q.push(1);
    q.push(2);
    q.push(8);
    q.push(3);
    q.push(2);
    cout<<q.Front()<<endl;
    q.pop();
    cout<<q.Front()<<endl;
    q.pop();
    q.push(20);
    q.print();
    cout<<q.size()<<" ";

    return 0;
}
