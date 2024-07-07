#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int n1=n;
        switch(n1){
            case 1: cout<<"First";
                    break;
            case 2: cout<<"Second";
                    break;
            default: cout<<"Non of the above";
        }
}

int main(){
    int a;
    cin>>a;
    solve(a);
}