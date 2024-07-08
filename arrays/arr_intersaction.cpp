#include<bits/stdc++.h>
using namespace std;

//priting of array
int print(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//doing problem
int solve(int ar[], int ar1[], int n, int m){
    cout<<"Intersacted array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i]==ar1[j]){
                cout<<ar[i]<<" ";
                break;
            }
        }
    }

}

int main(){
    int arr[100];
    int arr1[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
    for(int i=0; i<n; i++){
            cin>>arr1[i];
    }
    cout<<"Original array 1st: ";
    print(arr,n);
    cout<<"Original array 2nd: ";
    print(arr1,n);
    
    solve(arr,arr1,n,n);
}
