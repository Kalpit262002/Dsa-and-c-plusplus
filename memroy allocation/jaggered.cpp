#include<bits/stdc++.h>
using namespace std;

int func(){

}

int main(){
    int **arr=new int *[4];
    int m[4]={2,1,3,2};
    for(int i=0;i<4;i++){
        arr[i]=new int[m[i]];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<m[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<m[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    func();
    return 0;
}