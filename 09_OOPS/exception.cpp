#include<bits/stdc++.h>
using namespace std;
void fun(){
    int a,b;
    cin>>a>>b;
    if(b==0){
            throw(b);
        }
        else{
            cout<<a/b;
        }
}
int main(){
    try{
        fun();
    }
    catch(int i){
        cout<<"Runtime synchonous exception caught";
    }
    return 0;
}