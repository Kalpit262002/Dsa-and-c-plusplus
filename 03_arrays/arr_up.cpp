#include<iostream>
using namespace std;

int f(int ar[],int n){
    int arr1[5];
    for(int i=0;i<n;i++){
        arr1[i]=ar[i];
    }
    arr1[0]=5;
    for(int j=0;j<n;j++){
        cout<<arr1[j]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={0};
    f(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}