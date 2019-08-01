/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1_val, l2_val, carry(0);
        ListNode *root(nullptr), *prev_node;

        while(l1 != nullptr || l2 != nullptr) {
            if(l1 != nullptr) {
                l1_val = l1->val;
                l1 = l1->next;
            } else {
                l1_val = 0;
            }

            if(l2 != nullptr) {
                l2_val = l2->val;
                l2 = l2->next;
            } else {
                l2_val = 0;
            }

            int val = (l1_val + l2_val + carry) % 10;
            carry = (l1_val + l2_val + carry) / 10;
            if(root == nullptr) {
                root = new ListNode(val);
                prev_node = root;
            } else {
                prev_node->next = new ListNode(val);
                prev_node = prev_node->next;
            }
        }
        if(carry) prev_node->next = new ListNode(1);

        return root;
    }
};
