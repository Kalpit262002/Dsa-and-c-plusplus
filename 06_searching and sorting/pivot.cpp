#include<bits/stdc++.h>
using namespace std;

int func(){

}

int main(){

int arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s=0;
        int peak=s;
        // cout<<peak<<endl;
        while(peak<n){
        int sum_b=0;
        int sum_a=0;
        for(int i=0;i<peak;i++){
            sum_b=sum_b+arr[i];
        }
        for(int i=peak+1;i<n;i++){
            sum_a=sum_a+arr[i];
        }
        cout<<sum_b<<" "<<sum_a<<endl;
        if(sum_b==sum_a){
            cout<<"Pivot is at "<<peak<<endl;
            break;
        }
        peak++;
        }
        cout<<peak<<endl;
        cout<<"No pivot found"<<endl;
    return 0;
}
    