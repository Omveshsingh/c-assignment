#include<string>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
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
void print(Node* head){
    Node* helper=head;
    while (helper)
    {
        cout<<helper->data<<"->";
        helper=helper->next;
    }
    cout<<"NULL"<<endl;
}
void deleteathead(Node* &head){
    Node* helper=head;
    head=head->next;
    delete helper;
    
}
void deletion(Node* &head,int val){
    Node* helper=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return ;
    }
    while(helper->next && helper->next->data!=val){
        helper=helper->next;
    }
    if(helper->next){
    Node* tobedel=helper->next;
    helper->next=helper->next->next;
    delete tobedel;
    }
    else{
        cout<<"Not present";
    }
}
int main(){
    Node* head=NULL;
    int value;
    cout<<"enter value: ";
    cin>>value;
    int size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter elements: ";
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        insertattail(head,element);
    }
    print(head);
    deletion(head,value);
    print(head);
}