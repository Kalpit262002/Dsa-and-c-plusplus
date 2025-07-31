#include<iostream>
#include<vector>
using namespace std;

int solve(){
   vector<int> v1;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int j;
    cin>>j;
    v1.push_back(j);
   }
   for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
   }
}
int main(){
    
    solve();
    return 0;
    
}

