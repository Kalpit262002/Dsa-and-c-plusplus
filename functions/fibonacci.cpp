// function call work as a stack....sabse late call hone vala sabse pehle solve and so on..

#include<bits/stdc++.h>
using namespace std;

int febo(int n){
        int a=0;
        int b=1;
        int c=0;
        for(int i=0;i<n;i++){
            c=b+a;
            b=c;
            a=b;
        }
        return c;
}

int main(){
    int a;
    cin>>a;
    cout<<febo(a)<<endl;
}