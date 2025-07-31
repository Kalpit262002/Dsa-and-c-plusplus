#include<bits/stdc++.h>
using namespace std;

int func(int nums[],int n){
        // int temp;
        int i=0;
        while(i<n){
            if(nums[i]==0){
                // temp=nums[i];
                for(int j=i;j<n-1;j++){
                    nums[j]=nums[j+1];
                }
                nums[n-1]=0;
                i--;
                n--;
            }
            i++;
        }
}

int main(){

int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    func(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}