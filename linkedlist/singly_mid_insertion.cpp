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
void insertionAtMid(node* &head,int l,int d){
    node* temp=new node(d);
    node* temp2=head;
    for(int i=1;i<l-1;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void insertionAtEnd(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
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
    insertionAtMid(head,4,23);
    //after insertion at mid
    traverse(head);
    return 0;
}