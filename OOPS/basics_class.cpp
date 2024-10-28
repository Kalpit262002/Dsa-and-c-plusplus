#include<bits/stdc++.h>
using namespace std;
int x=10;
class print{
    private:
    int y=20;
    void fun();
    public:
    print(){
        y=30;
        cout<<y<<endl;
    }
    print(int l){
        cout<<"Hello"<<endl;
    }
    void fun2(){
        cout<<y<<endl;
        fun();
    }
    ~print(){};
    
};
void print::fun(){
    cout<<"Heehee"<<endl;   
}

int main(){
    int x=20;
    print ob;
    ob.fun2();
    print ob2(5);
    print ob3=print(5);
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}