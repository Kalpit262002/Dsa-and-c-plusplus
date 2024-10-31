#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int start,int end,int key){
    if(start>end){
        return false;
    }
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        return func(arr,start,mid-1,key);
    }
    else{
        return func(arr,mid+1,end,key);
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int start=0;
    int end=5;
    int key;
    cin>>key;
    cout<<func(arr,start,end,key);
    return 0;
}