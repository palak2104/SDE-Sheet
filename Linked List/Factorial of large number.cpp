#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val=x;
    }
};
void Multiply(Node* head,int n){
    Node* a=head;
    int carry=0;
    while(true){
        int prod=a->val*n+carry;
        a->val=prod%10;
        carry=prod/10;
        if(a->next!=0)
        a=a->next;
        else break;
    }
    while(carry!=0){
        Node* n=new Node(carry%10);
        a->next=n;
        carry/=10;
    }
}
int main()
{
    int n;
    cin>>n;
    Node* head=new Node(1);
    for(int i=2;i<=n;i++){
        Multiply(head,i);
    }
    Node* prev=NULL;
    Node* current=head;
    Node* Next=NULL;
       while(current){
           Next=current->next;
           current->next=prev;
           prev=current;
           current=Next;
       }
       head=prev;
    while(head){
        cout<<head->val;
        head=head->next;
    }
    return 0;
}
