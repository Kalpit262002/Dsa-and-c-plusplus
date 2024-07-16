#include<bits/stdc++.h>
using namespace std;

int func(int n,int m){
    int i=m;
    while(i<n){
        cout<<i<<" ";
        i=i+m;
    }
}

int main(){
    int n,m;
    cin>>n>>m;


    func(n,m);
    return 0;
}