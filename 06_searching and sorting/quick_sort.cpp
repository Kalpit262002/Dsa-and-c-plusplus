#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int p=s;
    for(int i=s+1;i<=e;i++){
        if(arr[p]>=arr[i]){
            int temp=arr[i];
            int q=i;
            while(q>s){
                arr[q]=arr[q-1];
                q--;
            }
            arr[s]=temp;
            p++;
        }
    }
    return p;
}
void quick_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p;
    p=partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,e;
    s=0;
    e=n-1;
    quick_sort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}