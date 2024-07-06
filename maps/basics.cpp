#include<iostream>
#include<map>
using namespace std;

int main(){
  map<int, string> m1{{1,"one"},{2,"two"}};
  m1.insert(pair<int, string>(3, "three"));
  m1.insert(pair<int, string>(4, "four"));
//   cout<<m1[1]<<" "<<m1[2]<<endl;
  m1.insert({6,"six"});
  m1[5]="five";
//   cout<<m1[5]<<endl;
//   cout<<m1[6]<<endl;
  map<int, int> m2;
  m2[1]=3;
  cout<<m1.size()<<endl;
  cout<<m2[1]<<endl;
    map<int, string>::iterator it;
  for(it = m1.begin(); it != m1.end(); it++){
    cout<<it->second<<" "<<endl;
  }
  cout << endl;

}