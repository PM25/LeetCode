#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        curr_str = ""
        max_len = 0
        for c in s:
            if c in curr_str:
                if len(curr_str) > max_len:
                    max_len = len(curr_str)
                curr_str = curr_str.split(c)[-1]
            curr_str += c
        
        if(len(curr_str) > max_len):
            max_len = len(curr_str)

        return max_len


# @lc code=end

