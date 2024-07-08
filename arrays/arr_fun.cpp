#include<bits/stdc++.h>
using namespace std;

int solve(int ar[], int n){
        for(int i=0; i<n; i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
}

int main(){
    int arr1[10];
    int a;
    cin>>a;
    int arr2[a];
    solve(arr1, 10);
    solve(arr1, 5);
    solve(arr2, a);
}