#include<bits/stdc++.h>
using namespace std;

int func(int& t){
    t++;
    return t;
}
// int& func2(int a){
//     int num=a;
//     int &q=num;
//     cout<<"Q:"<<q<<endl;   //this gives warning as we are referencing a local variable.
//     return q;
// }

int main(){
    int x=4;
    cout<<"Before:"<<x<<endl;
    func(x);
    cout<<"After:"<<x<<endl;
    return 0;
}