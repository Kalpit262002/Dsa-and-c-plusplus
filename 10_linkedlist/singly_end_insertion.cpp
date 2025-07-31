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
    //before insertion at end
    traverse(head);
    insertionAtEnd(tail,20);
    insertionAtEnd(tail,25);
    insertionAtEnd(tail,12);
    //after insertion at end
    traverse(head);
    return 0;
}