#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return func(arr+1,size-1,key);
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int key;
    cin>>key;
    cout<<func(arr,size,key);
    return 0;
}