// Write a function that takes the binary representation of a positive integer and returns the number of 
// set bits
//  it has (also known as the Hamming weight).

// Example 1:

// Input: n = 11

// Output: 3

// Explanation:

// The input binary string 1011 has a total of three set bits.
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
        int count=0;
        int n1=n;
        while(n1>0){
            if(n1&1){
                count++;
            }
            n1=n1>>1;
        }
        return count;
};

int main(){
    int a;
    cin>>a;
    cout<<solve(a)<<endl;
}