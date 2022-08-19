#
# @lc app=leetcode id=58 lang=python3
#
# [58] Length of Last Word
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        start_pos = -1
        end_pos = -1
        pos = len(s)

        while pos >= 0:
            pos -= 1
            if s[pos] != " ":
                end_pos = pos
                break

        while pos >= 0:
            pos -= 1
            if s[pos] == " ":
                start_pos = pos
                break

        return end_pos - start_pos


# @lc code=end

