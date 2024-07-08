#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int arr[n]={0}; // Initialize with 0
        fill_n(arr,3,4); // Fill 4 upto 3rd position
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}

int main(){
    int a;
    cin>>a;
    solve(a);
}