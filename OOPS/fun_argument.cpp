#include<bits/stdc++.h>
using namespace std;
class print{
    private:
    int y=10;
    public:
    void fun(){
        cout<<"Hello"<<endl;
    }
    void set(int x){
        y=x;
    }
    void sum(print ob3){
        cout<<y<<endl;
        y=y+ob3.y;
        cout<<y<<endl;
    }
    
};

int main(){
    print ob,ob2;
    ob.fun();
    ob.set(4);
    ob2.set(5);
    ob.sum(ob2);
    return 0;
}