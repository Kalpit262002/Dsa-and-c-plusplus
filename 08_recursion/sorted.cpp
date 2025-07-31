#include<bits/stdc++.h>
using namespace std;

int sum_array(int *arr,int size){
    if(size==0){
        return 0;
    }
    return arr[0]+sum_array(arr+1,size-1);
}
bool sorted_or_not(int *arr,int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return sorted_or_not(arr+1,size-1);
    }
}

int main(){
    int arr[5]={1,2,3,4,8};
    int size=5;
    cout<<sum_array(arr,size);
    cout<<endl;
    cout<<sorted_or_not(arr,size);
    return 0;
}