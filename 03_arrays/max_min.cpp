#include<iostream>
using namespace std;

int min(int arr[],int n);
int max(int arr[],int n);

int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    min(arr,n);
    max(arr,n);
    return 0;
}

int min(int arr[],int n){
    int minimum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    cout<<"Minimum of array is "<<minimum<<endl;
}

int max(int arr[],int n){
    int maximum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    cout<<"Maximum of array is "<<maximum<<endl;
}