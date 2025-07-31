#include<bits/stdc++.h>
using namespace std;
class print{
    private:
    friend void fun();
    int y=10;
    public:
    friend void fun2(print ob);
};
void fun(){
    print ob2;
    cout<<ob2.y+1<<endl;
}
void fun2(print ob){
    ob.y=5;
    cout<<ob.y<<endl;
}
inline int fun3(){
    cout<<"Hello"<<endl;
}
int main(){
    print ob3;
    fun2(ob3);
    fun();
    fun3();
    return 0;
}