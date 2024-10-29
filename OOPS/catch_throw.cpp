#include<bits/stdc++.h>
using namespace std;
void fun(int);
int main(){
fun(2);
fun(3);
fun(1);
fun(4);
}
void fun(int x){
try{
if(x==1){
throw 10;
}
if(x==2){
throw 'x';
}
if(x==3){
throw 3.85;
}
cout<<"\nEnd of try block.\n";
}
catch(...){
cout<<"\nCaught an exception";
}
cout<<"\nEnd of try catch system.";
}



