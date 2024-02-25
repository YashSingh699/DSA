#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
};

class NodeOperation {
    public:
    
    void PushNode(Node** head,int data_val){
        Node* new_node =  new Node();
        new_node->data = data_val;
        new_node->next = *head;
        *head = new_node;
    }
      
};

int main()
{
    Node* head =  NULL;
    NodeOperation *temp = new NodeOperation();

    for(int i=5; i>0; i--){
        temp->PushNode(&head,i);
    }

    vector<int>v;

    while(head != NULL){
        v.push_back(head->data);
        head = head->next;
    }

    cout<<"Middle of the linked list: ";
    cout<<v[v.size()/2]<<endl;

    return 0;
}