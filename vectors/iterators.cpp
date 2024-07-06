#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6};
    // cout<<v[0][0]<<endl;
    // cout<<v[1][0]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    v.resize(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.empty();
}