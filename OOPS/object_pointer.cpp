#include<iostream>
using namespace std;
class abc
{
public:
void fun()
{
cout<<"a";
}
};
int main()
{
abc *obptr; //obptr is object pointer or pointer to object
obptr->fun(); //fun function called using pointer to object
}