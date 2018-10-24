#include <string>
using namespace std;

class Solution {
public:
    int sym2int[26];

    Solution(){
        sym2int['I'-'A'] = 1;
        sym2int['V'-'A'] = 5;
        sym2int['X'-'A'] = 10;
        sym2int['L'-'A'] = 50;
        sym2int['C'-'A'] = 100;
        sym2int['D'-'A'] = 500;
        sym2int['M'-'A'] = 1000;
    }

    int romanToInt(string s) {
        int outNum = 0;

        int leftValue, rightValue;
        for(int iter(s.length()-1); iter >= 0; --iter){
            leftValue = sym2int[s.at(iter) - 'A'];

            if(iter == (s.length()-1)) {
                outNum += leftValue;
            } else if(leftValue < rightValue) {
                outNum -= leftValue;
            } else {
                outNum += leftValue;
            }

            rightValue = sym2int[s.at(iter) - 'A'];
        }

        return outNum;
    }
};
