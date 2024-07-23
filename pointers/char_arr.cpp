#include<bits/stdc++.h>
using namespace std;

int func(char *p){
    cout<<*p<<endl;
    p=p+1;
    cout<<*p<<endl;
}

int main(){

    int ar[10];
    cout<<ar<<endl;
    cout<<&ar<<endl;
    cout<<&ar[0]<<endl;
    int *w=&ar[0];
    cout<<w<<endl;
    char arr[5]="abcd";
    char *p=&arr[0];
    cout<<p<<endl;
    cout<<&arr[0]<<endl;

    char test = 'A';
    char *q=&test;
    cout<<q<<endl;
    // char *c="ABCD";
    // cout<<c<<endl;
    cout<<*p<<endl;
    func(p);
    cout<<*p<<endl;
    return 0;
}