#include<bits/stdc++.h>
using namespace std;

int binary(int ar[],int n,int m){
    int start=0;
    int last=n-1;
    int mid=((start)+((last-start)/2));
    
    int count=0;
    while(start<=last){
        if(ar[mid]==m){
            count++;
        }
        else if(m>ar[mid]){
            start=mid+1;
        }
        else{
            last=mid-1;
        }
        mid=((start)+((last-start)/2));
        
    }
    if(count==0){
        cout<<"Element not found";
    }
    else{
        cout<<"Found at "<<mid<<" index";
    }
}

int main(){

    int arr[100];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    binary(arr,n,m);
    return 0;
}