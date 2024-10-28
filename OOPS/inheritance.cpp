#include<bits/stdc++.h>
using namespace std;
class a{
    private:
    int y=5;
    protected:
    int x=10;
    public:
    int z=5;
    int fun(){
        y=y+1;
        cout<<y<<endl;
    }
};
class b:public a{
    public:
    int fun2(){
        cout<<"Hello "<<x<<endl;
        fun();
    }
};
class c:public a,public b{
};
int main(){
    c ob;
    ob.fun2();
    return 0;
}