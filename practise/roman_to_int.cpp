#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        int ans=0;
        unordered_map<char, int> dict={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000},
        };
        for(int i=0;i<s.length();i++){
            // int temp=0;
            if(i!=s.length()-1){
                if(dict[s[i]]<dict[s[i+1]]){
                    ans+=dict[s[i+1]]-dict[s[i]];
                    i++;
                    continue;
                }
            }
            ans=ans+dict[s[i]];
        }
        return ans;
    }

int main(){
    string s="XLI";
    cout<<"Your Roman number is: "<<s<<endl;
    cout<<"It's integer is: "<<romanToInt(s);
    return 0;
}