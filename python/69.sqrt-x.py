#
# @lc app=leetcode id=69 lang=python3
#
# [69] Sqrt(x)
#

# @lc code=start
class Solution:
    def binarySearch(self, l, r, x):
        mid = (r + l) // 2
        if mid * mid <= x < (mid + 1) * (mid + 1):
            return mid
        elif mid * mid > x:
            return self.binarySearch(l, mid - 1, x)
        else:
            return self.binarySearch(mid + 1, r, x)

    def mySqrt(self, x: int) -> int:
        r = math.ceil(x / 2)  # answer are between 0 to ceil(x/2)
        return self.binarySearch(0, r, x)


# @lc code=end

