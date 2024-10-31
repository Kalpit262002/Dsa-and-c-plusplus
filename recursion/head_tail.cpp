#include<bits/stdc++.h>
using namespace std;

void func_tail(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    func_tail(n-1);
}
void func_head(int n){
    if(n==0){
        return;
    }
    func_head(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    func_tail(n);
    cout<<endl;
    func_head(n);
    return 0;
}