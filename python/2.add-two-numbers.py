#
# @lc app=leetcode id=2 lang=python3
#
# [2] Add Two Numbers
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        root = None
        while l1 != None or l2 != None:
            s = 0
            if l1 != None:
                s += l1.val
                l1 = l1.next
            if l2 != None:
                s += l2.val
                l2 = l2.next

            if root == None:
                root = ListNode((s + carry) % 10)
                curr_node = root
            else:
                curr_node.next = ListNode((s + carry) % 10)
                curr_node = curr_node.next
            carry = (s + carry) // 10
        
        if carry > 0:
            curr_node.next = ListNode(carry)

        return root


# @lc code=end
