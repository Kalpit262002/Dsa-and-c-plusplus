#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int n1=n;
        int i=-1;
        int ans=0;
        while(n1!=0){
            int last=n1%10;
            i++;
            if(last==1){
                ans = ans+pow(2,i);
            }
            n1=n1/10;
        }
    return ans;
}

int main(){
    int a;
    cin>>a;
    cout<<solve(a)<<endl;
}