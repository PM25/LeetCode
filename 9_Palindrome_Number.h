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
