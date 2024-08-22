#include<bits/stdc++.h>
using namespace std;

int func(){

}

int main(){
    int arr[6]={1,1,0,0,0,2};
    // int arr[6]={0,0,1,1,0,0};

   //to solve 0_1_2 count method

int count_0=0;
for(int i=0 ;i<6;i++){
    if(arr[i]==0){
        count_0++;
    }
    }
int count_1=0;
for(int i=0 ;i<6;i++){
    if(arr[i]==1){
        count_1++;
    }
    }
    for(int i =0;i<count_0;i++){
        arr[i]=0;
    }

     for(int i =count_0;i<count_0+count_1;i++){
        arr[i]=1;
    }
    for(int i =count_0+count_1;i<6;i++){
        arr[i]=2;
    }

//to solve 0_1 count method

// int count=0;
// for(int i=0 ;i<=6-1;i++){
//     if(arr[i]==0){
//         count++;
//     }
//     }

//     for(int i =0;i<count;i++){
//         arr[i]=0;
//     }

//      for(int i =count;i<6;i++){
//         arr[i]=1;
//     }

    
    
    //to solve 0_1_2 direct method

    // int start=0;
    // int i=0;
    // int end=5;
    // int mid=(start+end)/2;
    // while(start<mid && mid<=end){
    //     if(arr[i]==0){
    //         swap(arr[i],arr[start]);
    //         start++;
    //         i++;
    //         mid=(start+end)/2;
    //     }
    //     else if(arr[i]==1 && arr[mid]==1){
    //         mid=mid+1;
    //     }
    //     else if(arr[i]==1){
    //         swap(arr[i],arr[mid]);
    //     }
    //     else{
    //         swap(arr[i],arr[end]);
    //         end--;
    //         mid=(start+end)/2;
    //     }
    // }

        //to solve 0&1 comparision method

        // if(arr[i]>arr[end]){
        //     swap(arr[i],arr[end]);
        //     i++;
        //     end--;
        // }
        // else if(arr[i]==0 && arr[end]==0){
        //     i++;
        // }
        // else if(arr[i]==1 && arr[end]==1){
        //     end--;
        // }
        // else{
        //     i++;
        // }
    
    for(int k=0;k<6;k++){
        cout<<arr[k]<<" ";
    }

    // func();
    return 0;
}