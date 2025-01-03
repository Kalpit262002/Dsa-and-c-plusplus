#include<bits/stdc++.h>
using namespace std;

string func(string test){
    vector<string> v;
    string ans;
    int size=test.length();
    char space=' ';
    for(int i=0;i<size;i++){
        string temp="";
        while(test[i]!=space&&i<size){
            temp.push_back(test[i]);
            i++;
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        if(v[i].size()<=3){
            for(int j=0;j<v[i].size();j++){
                ans.push_back(v[i][j]);
            }
        }
        else{
            ans.push_back(v[i][0]);
            ans+=to_string(v[i].size()-2);
            ans.push_back(v[i][v[i].size()-1]);
        }
        ans.push_back(space);
    }
    return ans;
}

int main(){
    string test="Hello mye name is Kalpit";
    cout<<func(test);
    return 0;
}