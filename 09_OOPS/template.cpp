#include<bits/stdc++.h>
using namespace std;

template <class t>
void fun(t a,t b) /* this is function template. t can be any data type */
{
cout<<a+b<<endl;
}

template <class t1,class t2>
void fun2(t1 a,t2 b) /* this is function template. t can be any data type */
{
cout<<a+b<<endl;
}
int main()
{
fun(1,2); // function template called, for 2 integers
fun(1.1,2.1); //// function template called, for 2 floats
fun2(1,2); // function template called, for 2 integers
fun2(1.1,'A'); //// function template called, for 1 float and 1 char(ASCII value)
}
