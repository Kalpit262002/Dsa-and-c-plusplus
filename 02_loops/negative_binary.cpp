#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int n1=n;
        float ans=0;
        for(int i=0; n1!=0; i++){
            int bit=n1&1;
            ans=bit*pow(10,i)+ans;
            n1=n1>>1;
        }
        return ans;
}

int main(){
    int a;
    cin>>a;
    int b;
    b=a*-1;
    int newAns = (~(solve(b)))+1; // 2nd compliment of normal binary
    cout<<newAns<<endl;
}