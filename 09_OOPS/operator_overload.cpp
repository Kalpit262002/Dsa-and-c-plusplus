#include<bits/stdc++.h>
using namespace std;

class a{
    private:
    int x=2;
    public:
    void show(){
        cout<<x<<endl;
    }
    void operator--(){
        x=x+2;
    }
    void operator +(a ob1){
        x=x+ob1.x;
    }
};

int main(){
    a ob;
    ob.show();
    --ob;
    ob.operator--();
    ob.show();
    ob+ob;
    ob.show();
    ob.operator+(ob);
    ob.show();
    return 0;
}