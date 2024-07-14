#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    // cin>>str;
    getline(cin,str);
    cout<<str<<endl;
    str.push_back('4');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    return 0;
}