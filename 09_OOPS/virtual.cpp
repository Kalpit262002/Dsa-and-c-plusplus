#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    virtual void fun(){
        cout<<"a"<<endl;
    }
};
class b:public a{
    public:
    void fun(){
        cout<<"b"<<endl;
    }
};
class c{
    public:
    virtual void fun()=0;
};
class d:public c{
    public:
    void fun(){
        cout<<"2"<<endl;
    }
};

int main(){
    a *pt,ob1;
    b ob;
    pt=&ob;
    pt->fun();
    pt=&ob1;
    pt->fun();
    c *pt2;
    d ob2;
    pt2=&ob2;
    pt2->fun();
    return 0;
}