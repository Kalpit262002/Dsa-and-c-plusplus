//return difference of product and sum of digits.
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int sum=0;
        int mul=1;
        int n1=n;
        while(n1>0){
            int last=n1%10;
            sum=sum+last;
            mul=mul*last;
            n1 = n1/10;
        }
        int ans;
        if(sum>=mul){
            ans=sum-mul;
        }
        else{
            ans=mul-sum;
        }
        return ans; 
};

int main(){
    int a;
    cin>>a;
    cout<<solve(a)<<endl;
}