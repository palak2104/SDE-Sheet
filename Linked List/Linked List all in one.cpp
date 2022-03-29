#include <bits/stdc++.h>

using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
    this->data=data;
    this->next=NULL;
    }
};
Node* head=NULL;
void add_last(){
    int x;
    cout<<"Enter data for node";
    cin>>x;
    Node* node=new Node(x);
    if(head==NULL){
        head=node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    return;
}
void traverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"---->";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
void add_begining(){
    int x;
    cout<<"Enter data for node";
    cin>>x;
    Node* node=new Node(x);
    Node* temp=head;
    node->next=temp;
    head=node;
    return;
}
void add_after_specific(){
    cout<<"Enter position after which to add"<<endl;
    int x;
    cin>>x;
    Node* temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    cout<<"Enter data for node";
    int val;
    cin>>val;
    Node* node=new Node(val);
    node->next=temp->next;
    temp->next=node;
    temp=head;
}
int find_length(){
   Node* temp=head;
   int count=0;
   while(temp){
       temp=temp->next;
       count++;
   }
   return count;
}
void delete_from_begin(){
    Node* temp=head;
    head=temp->next;
    delete temp;
}
void delete_specific_or_end(){
    cout<<"Enter the location";
    int x;
    cin>>x;
    int a=x;
    Node* temp=head;
    if(x==1){
    head=temp->next;
    delete temp;
    cout<<"Node at position "<<a<<" deleted"<<endl;
    return;
    }
    x-=2;
    while(x--){
        temp=temp->next;
    }
    Node* node=temp->next;
    temp->next=node->next;
    delete node;
    cout<<"Node at position "<<a<<" deleted";
}
int main()
{
    int choice,loc,a;
    do{
    printf("Enter your choice \n1. for insertion at last, \n2. Traverse the link list\n3. add at begining \n4.Add after position\n5. Find length\n6. Delete from Begining\n7. Delete last or specific\n\n any other to exit. ");

    scanf("%d",&choice);

    switch(choice){
case 1:
    add_last();
    break;
case 2:
    traverse(head);
    break;
    // trying to traverse
case 3:
    add_begining();
    break;
case 4:
    add_after_specific();
    break;

case 5:
    a=find_length();
    printf("Current length=%d",a);
    break;
case 6:
    delete_from_begin();
    break;
case 7:
    delete_specific_or_end();
    break;
default:
    printf("Exiting");
    exit(0);
    }
}while(1);
return 0;
}

