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

    //destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void insertionAtEnd(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void deletion(node* &head, node* &tail, int p){
    if(p==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* current=head;
        node* previous=NULL;
        for(int i=1;i<p;i++){
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
        if(current->next==NULL){
            tail=previous;
        }
        else{
        current->next=NULL;
        }
        delete current;
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
    //before deletion
    traverse(head);
    deletion(head,tail,4);
    //after deletion
    traverse(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}