#include<bits/stdc++.h>
using namespace std;

int reverse(char ar[]){
    int i;
    for(i=0;ar[i]!='\0';i++){
    }
    int k=0;
    while(k<=i-1){
        swap(ar[i-1],ar[k]);
        i--;
        k++;
    }
}

int main(){

    char arr[100];
    cin>>arr;
    cout<<"String is: "<<arr<<endl;
    reverse(arr);
    cout<<"Reversed is: "<<arr;
    return 0;
}