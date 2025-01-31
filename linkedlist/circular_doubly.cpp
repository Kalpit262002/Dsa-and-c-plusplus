#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previos;

    node(int a){
        this->data=a;
        this->next=this;
        this->previos=NULL;
    }

    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Node has been deleted with data "<<value<<endl;
    }
};
void traverse(node* &tail){
    if(tail==NULL){
        cout<<"No data"<<endl;
    }
    else if(tail->next==tail){
        cout<<tail->data<<endl;
    }
    else{
    node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
    }
}
void insert(node* &tail,int element,int d){
    node* temp=new node(d);
if(tail==NULL){
    temp->next=temp;
    temp->previos=temp;
    tail=temp;
}
else{
    node* current=tail;
    while(current->data!=element){
        current=current->next;
    }
    node* connect=NULL;
    connect=current->next;
    current->next=temp;
    temp->previos=current;
    temp->next=connect;
    connect->previos=temp;
    // if(current==tail){
    // tail=temp;
    // }
}
}
void deletion(node* &tail,int element){
    node* temp=tail;
    while(temp->data!=element){
        temp=temp->next;
    }
    // node* connect=NULL;
    // connect=temp->previos;
    temp->next->previos=temp->previos;
    temp->previos->next=temp->next;
    if(temp==tail){
        tail=temp->next;
    }
    temp->next=NULL;
    delete temp;
}
int main(){
    node* tail=NULL;
    traverse(tail);
    insert(tail,3,10);
    traverse(tail);
    insert(tail,10,24);
    traverse(tail);
    insert(tail,24,20);
    traverse(tail);
    insert(tail,24,50);
    traverse(tail);
    insert(tail,10,30);
    traverse(tail);
    deletion(tail,50);
    traverse(tail);
    cout<<"tail "<<tail->data<<endl;
    deletion(tail,10);
    traverse(tail);
    cout<<"tail "<<tail->data<<endl;
    return 0;
}