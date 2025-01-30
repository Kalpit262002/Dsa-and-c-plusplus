#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int a){
        this->data=a;
        this->next=NULL;
    }
};
void insertionAtBeginning(node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertionAtEnd(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void insertionAtMid(node* &head,node* &tail,int l,int d){
    if(l==1){
        insertionAtBeginning(head,d);
        return;
    }
    node* temp=new node(d);
    node* temp2=head;
    for(int i=1;i<l-1;i++){
        temp2=temp2->next;
    }
    if(temp2->next==NULL){
        insertionAtEnd(tail,d);
        return;
    }
    else{
    temp->next=temp2->next;
    temp2->next=temp;
    }
}
void traverse(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertionAtEnd(tail,20);
    insertionAtEnd(tail,25);
    insertionAtEnd(tail,73);
    //before insertion at mid
    traverse(head);
    insertionAtMid(head,tail,4,23);
    //after insertion at mid
    traverse(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}