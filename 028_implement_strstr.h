class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;

        int haystackLen = haystack.length(),
            needleLen = needle.length();
        for(int idx(0); idx < (haystackLen - needleLen + 1); ++idx) {
            int offset;
            for(offset = 0; offset < needleLen; ++offset) {
                if(haystack[idx + offset] != needle[offset]) break;
            }

            if(offset == needleLen) return idx;
        } return -1;
    }
};
