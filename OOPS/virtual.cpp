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

int main(){
    a *pt,ob1;
    b ob;
    pt=&ob;
    pt->fun();
    pt=&ob1;
    pt->fun();

    return 0;
}