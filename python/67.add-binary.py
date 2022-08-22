#
# @lc app=leetcode id=67 lang=python3
#
# [67] Add Binary
#

# @lc code=start
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(a) > len(b):
            a, b = b, a #swap
            
        a = [int(n) for n in a]
        b = [int(n) for n in b]
        c = 0
        out = ""
        
        while len(b) > 0 or c > 0:
            if len(a) > 0:
                c += a.pop(-1) + b.pop(-1)
            elif len(b) > 0:
                c += b.pop(-1)
            out = str(c % 2) + out
            c //= 2
        
        return out
        
# @lc code=end

