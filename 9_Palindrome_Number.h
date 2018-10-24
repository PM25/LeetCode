// [LeetCode] 9. Palindrome Number
// https://leetcode.com/problems/palindrome-number/
//
// code by Jason Huang aka PM
// github: https://github.com/PM25
// website: https://pm25.github.io
// discord: https://discord.gg/G4jEeDC
// email: pm.binary@gmail.com

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else if(reverse(x) == x) return true;
        else return false;
    }

    int reverse(int x){
        const int base = 10;
        int reverseNum = 0;

        while(x){
            reverseNum *= base;
            reverseNum += (x % 10);
            x /= base;
        }

        return reverseNum;
    }
};
