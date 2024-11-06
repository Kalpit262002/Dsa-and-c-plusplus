#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=s+((e-s)/2);
    int size1=mid-s+1;
    int size2=e-mid;
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    int k=s;
    for(int i=0;i<size1;i++){
        arr1[i]=arr[k];
        k++;
    }
    for(int i=0;i<size2;i++){
        arr2[i]=arr[k];
        k++;
    }
    int index1=0;
    int index2=0;
    k=s;
    while(index1<size1 && index2<size2){
        if(arr1[index1]<arr2[index2]){
            arr[k]=arr1[index1];
            k++;
            index1++;
        }
        else{
            arr[k]=arr2[index2];
            k++;
            index2++;
        }
    }
    while(index1<size1){
        arr[k]=arr1[index1];
        k++;
        index1++;
    }
    while(index2<size2){
        arr[k]=arr2[index2];
        k++;
        index2++;
    }
    delete []arr1;
    delete []arr2;
}
void merge_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+((e-s)/2);
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    merge_sort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}