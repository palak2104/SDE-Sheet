class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>pq;
           for(int i=0;i<k;i++){
               pq.push({arr[i]->data,arr[i]});
           }
           Node* dummy=new Node(0);
           Node* head=dummy;
           while(pq.size()!=0){
               auto it=pq.top();
               pq.pop();
               Node* a=it.second;
               head->next=a;
               head=a;
               if(a->next!=NULL){
                  pq.push({a->next->data,a->next}); 
               }
           }
           return dummy->next;
    }
};
