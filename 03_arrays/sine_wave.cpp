#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100][100]={{1,2,3},{4,5,6},{7,8,9}};
    
    //printing array
    cout<<"Your array is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing in wave: "<<endl;

    for(int i=0;i<3;i++){
        if(i&1){
            for(int j=3-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        }
        else{
            for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        } 
    }


    return 0;
}