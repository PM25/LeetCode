#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()) return "";

        string baseStr = strs.at(0);
        int commonCount = 0;
        for(int iter(1); iter < strs.size(); ++iter){
            string currStr = strs.at(iter);
            for(int pos(0); pos < currStr.size(); ++pos){
                if(baseStr.at(pos) != currStr.at(pos)){
                    break;
                } else if(commonCount < pos){
                    commonCount = pos;
                }
            }
        }

        string commonStr;
        for(int pos(0); pos <= commonCount; ++pos){
            commonStr += baseStr.at(pos);
        }

        return commonStr;
    }
};
