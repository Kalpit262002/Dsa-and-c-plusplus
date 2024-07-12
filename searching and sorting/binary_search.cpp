#include<bits/stdc++.h>
using namespace std;

int binary(int ar[],int n,int m){
    int start=0;
    int last=n-1;
    int mid=((start/2)+(last/2));
    
    int count=0;
    while(start<=last){
        if(ar[mid]==m){
            return mid;
        }
        else if(m>ar[mid]){
            start=mid+1;
        }
        else{
            last=mid-1;
        }
        mid=((start/2)+(last/2));
}
 return -1;
}

int main(){

    int arr[100];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    cout<<"Element found at "<<binary(arr,n,m)<<" index";
    return 0;
}