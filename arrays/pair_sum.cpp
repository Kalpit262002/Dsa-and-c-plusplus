#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int s=5;
    vector<vector<int>> a;
    vector<int> b;
    for(int i=0;i<n;i++){
             b.clear();
      for(int j=i+1;j<n;j++){
         int sum=arr[i]+arr[j];
         if(sum==s){
            b.push_back(arr[i]);
            b.push_back(arr[j]);
            a.push_back(b);
         }
    
      }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i][i+1]<<" ";
    }
}