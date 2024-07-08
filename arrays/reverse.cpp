#include<bits/stdc++.h>
using namespace std;

int print(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int solve(int ar[], int n){
        int arr1[10];
    for(int i=0;i<n;i++){
        arr1[i]=ar[i];
    }
    int i=0,j=n-1;
    for(int a=0;a<n/2;a++){
        swap(arr1[i],arr1[j]);
        i++;
        j--;
    }
    cout<<"Reversed array: ";
    print(arr1,n);
}

int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    cout<<"Original array: ";
    print(arr,n);
    solve(arr,n);
}
