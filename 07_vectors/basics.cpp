#include<iostream>
#include<vector>
using namespace std;

int solve(){
   vector<int> v1;
   v1.assign(1,9);
   v1.push_back(4);
   v1.push_back(56);
   cout<<v1[v1.size()-1]<<endl;  //last element
   for(int i=0; i<v1.size(); i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
   v1.pop_back();
   for(int i=0; i<v1.size(); i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
   v1.insert(v1.begin()+2,5);
   for(int i=0; i<v1.size(); i++){
    cout<<v1[i]<<" ";
   }
   cout<<"End"<<endl;
}
int main(){
    
    solve();
    return 0;
    
}