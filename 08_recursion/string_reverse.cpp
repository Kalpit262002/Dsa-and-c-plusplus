#include<bits/stdc++.h>
using namespace std;

void func(string s,int size){
    if(size==0){
        return;
    }
    func(s.substr(1),size-1);
    cout<<s[0];
}

int main(){
    string s="abcde";
    int size=5;
    func(s,size);
    return 0;
}