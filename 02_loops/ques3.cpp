// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

int INT_MIN=-2147483648;
int INT_MAX=2147483647;
class Solution {
public:
    int reverse(int x) {
        int x1=x;
        int digit=0;
        while(x1!=0){
            int last =x1%10;
            if(digit<INT_MIN/10||digit>INT_MAX/10){
            return 0;
        }
            else{
                digit=digit*10+last;
            }
            x1=x1/10;

        }
        
        return digit;
    }
};