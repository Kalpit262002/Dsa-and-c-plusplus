#include<bits/stdc++.h>
using namespace std;

int bubble(int ar[],int n){
    for(int i=n-1;i>0;i--){
        bool b=true;
        for(int j=0;j<i;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
                b=false;
            }
        }
        if(b==true){
            break;
        }
    }   
}

int main(){

    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bubble(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}