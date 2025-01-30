#include<bits/stdc++.h>
using namespace std;

class singly{
    public:
    int data;
    singly* next;

    // singly(int a){
    //     this->data=a;
    //     this->next=NULL;
    // }
};

int main(){
    //static memory
    singly node1;
    node1.data=10;
    cout<<node1.data<<endl;
    cout<<node1.next<<endl;
    //heap memory
    singly* node2=new singly();
    node2->data=20;
    cout<<node2->data<<endl;
    cout<<node2->next<<endl;

    return 0;
}