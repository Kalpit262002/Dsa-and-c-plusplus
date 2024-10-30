#include<bits/stdc++.h>
using namespace std;

int func(){

}

int main(){
    int i=5;
    int *p=&i;
    // int k=&i; error since address can't be stored in integer variable.
    int *j=p; //copy of a pointer 
    cout<<&i<<" Adsress of i"<<endl;
    cout<<p<<" printing p"<<endl;
    cout<<&p<<" printing &p"<<endl;
    cout<<&j<<" printing &j"<<endl;
    cout<<j<<" printing j"<<endl;
    cout<<*p<<" printing *p"<<endl;
    cout<<++(*p)<<" printing ++*p"<<endl;
    cout<<++(*j)<<" printing ++*j"<<endl;
    j=j+1;
    cout<<j<<" printing j"<<endl;
    cout<<p<<" printing p"<<endl;
    cout<<i<<endl;
    int k=4;
    p=&k; //updating a pointer address
    cout<<&k<<endl;
    cout<<p<<endl;
    p=p-1;
    cout<<p<<endl;
    int arr[4]={2,3};
    cout<<arr<<" address";
    func();
    return 0;
}