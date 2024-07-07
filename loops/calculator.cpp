#include<bits/stdc++.h>
using namespace std;

int solve(float n1, float n2, char n3){
        switch(n3){
            case '+': cout<<n1+n2;
            break;
            case '-': cout<<n1-n2;
            break;
            case '*': cout<<n1*n2;
            break;
            case '/': cout<<n1/n2;
            break;
        }
}

int main(){
    float a,b;
    char c;
    cin>>a>>b;
    cin>>c;
    solve(a,b,c);
}