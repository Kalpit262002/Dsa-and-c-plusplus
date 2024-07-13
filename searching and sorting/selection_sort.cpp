#include<bits/stdc++.h>
using namespace std;

int min(int ar[],int n,int m){
    int min=INT_MAX;
    int ans;
    for(int i=n;i<m;i++){
        if(ar[i]<min){
            min=ar[i];
            ans=i;
        }
    }
    return ans;
}

int selection(int ar[],int n){
    for(int i=0;i<n-1;i++){
       int m= min(ar,i,n);
        swap(ar[i],ar[m]);
    }
}

int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    selection(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}