//Q1
#include <iostream>
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
void insert_at_tail(Node* &head,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head=newnode;
    }
    else{
    Node* helper=head;
    while(helper->next!=NULL){
        helper=helper->next;
    }
    helper->next=newnode;
    }
}
void printLinkedList(Node* head){
    Node* helper=head;
    while (helper)
    {
        cout<<helper->data<<"->";
        helper=helper->next;
    }
    cout<<"NULL"<<endl; 
}
int main(){
    Node* head=NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    insert_at_tail(head,40);
    printLinkedList(head);
    return 0;
}