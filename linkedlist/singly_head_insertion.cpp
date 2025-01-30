#include<bits/stdc++.h>
using namespace std;

class singly{
    public:
    int data;
    singly* next;

    singly(int a){
        this->data=a;
        this->next=NULL;
    }
};

//singly* &head --> Its nothing but refrence se liya gaya head node
void insertionAtBeginning(singly* &head, int d){
    //make new node
    singly* temp=new singly(d);
    //address pointer of new node to point head
    temp->next=head;
    //update head to new node
    head=temp;
}

void traverse(singly* &head){
    //copy node of head, taaki jo bhi changes ho ismai ho naaki original LL mai
    singly* temp=head;
    while(temp!=NULL){
    //print the data
    cout<<temp->data<<" ";
    //forward
    temp=temp->next;
    }
    cout<<endl;
}

int main(){
    //created new node
    singly* node1=new singly(10);
    //head pointed at this node
    singly* head =node1;
    //traverse before insertion
    traverse(head);
    //inserting at head
    insertionAtBeginning(head,20);
    insertionAtBeginning(head,28);
    insertionAtBeginning(head,12);
    //traverse after insertion
    traverse(head);
    return 0;
}