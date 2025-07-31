#include<bits/stdc++.h>
using namespace std;

int Row_with_max_sum(int ar[][100], int n, int m);

int main(){

    int arr[100][100];
    
    //Taking input
    cout<<"Enter number of rows ";
    int n;
    cin>>n;
    cout<<"Enter number of columns ";
    int m;
    cin>>m;
    int q;
    q=m*n;
    cout<<"Enter "<<q<<" elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //printing array
    cout<<"Your array is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Row having maximum sum is: ";
    cout<<Row_with_max_sum(arr,n,m);

    return 0;
}

int Row_with_max_sum(int ar[][100], int n, int m){
    int max=INT_MIN;
    int sum=0;
    int ans;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum=sum+ar[i][j];
        }
        if(sum>max){
            max=sum;
            ans=i+1;
        }
    }
    return ans;
}