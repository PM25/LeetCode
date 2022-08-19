#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;

        for(unsigned int iter(0); iter < s.length(); ++iter){
            char cur = s.at(iter);

            if(cur == '{' || cur == '[' || cur == '('){
                parentheses.push(cur);
            } else {
                if(!parentheses.empty()){
                    if(bracketType(parentheses.top()) == bracketType(cur)){
                        parentheses.pop();
                    } else return false;
                } else return false;
            }
        }

        if(parentheses.empty()) return true;
        else return false;
    }

private:
    int bracketType(char c){
        if(c == '{' || c == '}') return 0;
        else if(c == '[' || c == ']') return 1;
        else if(c == '(' || c == ')') return 2;
        else return -1;
    }
};
