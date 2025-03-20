#include<bits/stdc++.h>
using namespace std;

int func(vector<int> v){
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    return ans;
}

int main(){
    vector<int> v={3,3,2,4,2};
    cout<<func(v)<<endl;
    return 0;
}