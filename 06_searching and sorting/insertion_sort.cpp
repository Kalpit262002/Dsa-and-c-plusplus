#include<bits/stdc++.h>
using namespace std;

void insertion(int ar[],int n){
    int j =0;
    for(int i=1;i<n;i++){
        int temp=ar[i];
        for(j=i-1;j>=0;j--){
            if(ar[j]>temp){
                ar[j+1]=ar[j];
            }
            else{
                break;
            }
        }
        ar[j+1]=temp;
    }

}

int main(){

int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    insertion(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}