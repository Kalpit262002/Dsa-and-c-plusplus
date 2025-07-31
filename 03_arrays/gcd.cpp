#include<bits/stdc++.h>
using namespace std;

int func(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cin>>a,b;


    cout<<func(a,b);
    return 0;
}