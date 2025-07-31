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
int solve(int ar[], int n){

    //copying of array
        int arr1[100];
    for(int i=0;i<n;i++){
        arr1[i]=ar[i];
    }

    //problem solving
    int i=0;
    while(i<n-1){
        swap(arr1[i],arr1[i+1]);
        i=i+2;
    }

    cout<<"Alternate swapped: ";
    print(arr1,n);
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    cout<<"Original array: ";
    print(arr,n);
    solve(arr,n);
}
