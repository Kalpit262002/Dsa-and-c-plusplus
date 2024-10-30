#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    float d;
    void *p=&n;
    cout<<p<<endl;
    cout<<&n<<endl;
    p=&d;
    cout<<p<<endl;
    cout<<&d<<endl;
    return 0;
}