#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* helper=head;
    while(helper){
        cout<<helper->data<<"->";
        helper=helper->next;
    }
    cout<<"NULL"<<endl;
}
void insertattail(Node* &head,int val){
    Node* newnode=new Node(val);
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
void sort(Node* &head,int val){
    Node* insert=new Node(val);
    Node* helper=head;
    if(insert->data<helper->data){
        insert->next=head;
        head=insert;
        return ;
    }
    if(head==NULL){
        head=insert;
        return ;
    }
    else{
    while(helper->next && helper->data<insert->data){
        helper=helper->next;
    }
    insert->next=helper->next;
    helper->next=insert;
    }
}
int main(){
    Node* head=NULL;
    int size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        insertattail(head,element);
    }
    print(head);
    cout<<"Enter the inserting value: ";
    int value;
    cin>>value;
    sort(head,value);
    print(head);
    return 0;
}