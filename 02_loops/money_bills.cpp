#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int n1=n;
        cout<<"Number of 100 = "<<n1/100<<endl;
        n1=n1%100;
        cout<<"Number of 50 = "<<n1/50<<endl;
        n1=n1%50;
        cout<<"Number of 10 = "<<n1/10<<endl;
        n1=n1%10;
        cout<<"Number of 1 = "<<n1<<endl;
}

int main(){
    int a;
    cin>>a;
    solve(a);
}