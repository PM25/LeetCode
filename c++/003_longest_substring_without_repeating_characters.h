#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int char_pos[128], max_len(0), curr_len(0), front(0);
        fill(begin(char_pos), end(char_pos), -1);

        for(int back(0); back<s.size(); ++back) {
            // Check if s.at(back) is between back and front
            if(char_pos[s.at(back)] >= front) {
                if(curr_len > max_len) max_len = curr_len;

                front = char_pos[s.at(back)] + 1;
                curr_len = back - front + 1;
            } else {
                ++curr_len;
            }

            char_pos[s.at(back)] = back;
        }

        return (curr_len > max_len)? curr_len : max_len;
    }
};
