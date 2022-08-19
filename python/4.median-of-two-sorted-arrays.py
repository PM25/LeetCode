#
# @lc app=leetcode id=4 lang=python3
#
# [4] Median of Two Sorted Arrays
#

# @lc code=start
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        arrays_length = len(nums1) + len(nums2)
        l = []
        for _ in range(arrays_length // 2):
            if len(nums1) > 0 and len(nums2) > 0:
                if nums1[0] < nums2[0]:
                    nums1.pop(0)
                else:
                    nums2.pop(0)
            else:
                l += nums1
                l += nums2

        if arrays_length % 2 == 0:
            return (l[arrays_length // 2 - 1] + l[arrays_length // 2]) / 2
        else:
            return l[arrays_length // 2]


# @lc code=end

#%%
a = [1, 2, 3, 4, 5]

# %%
