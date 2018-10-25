#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()) return "";

        string baseStr = strs.at(0);
        int commonCount = baseStr.length();
        for(int iter(1); iter < strs.size(); ++iter){
            string currStr = strs.at(iter);
            if(commonCount > currStr.length()) commonCount = currStr.length();

            for(int pos(0); pos < commonCount; ++pos){
                if(baseStr.at(pos) != currStr.at(pos)){
                    if(commonCount > pos) commonCount = pos;
                    break;
                }
            }
        }

        string commonStr = "";
        for(int pos(0); pos < commonCount; ++pos){
            commonStr += baseStr.at(pos);
        }

        return commonStr;
    }
};
