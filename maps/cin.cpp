#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        m[i]=j;
    }
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
}