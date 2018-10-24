// [LeetCode] 7. Reverse Integer
// https://leetcode.com/problems/reverse-integer/
//
// code by Jason Huang aka PM
// github: https://github.com/PM25
// website: https://pm25.github.io
// discord: https://discord.gg/G4jEeDC
// email: pm.binary@gmail.com

#include <climits>

class Solution{
public:
    int reverse(int x){
        const int base = 10; // Set the base of reverse number.
        long long reverseNum = 0; // The result number.

        while(x){
            reverseNum *= base;
            reverseNum += (x % base);
            x /= base;
        }

        if(reverseNum < INT_MAX && reverseNum > INT_MIN) return reverseNum;
        else return 0;
    }
};
