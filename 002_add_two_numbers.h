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
        ListNode *root(nullptr), *curr_node;

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

            int sum = l1_val + l2_val + carry;
            carry = sum / 10;
            if(root == nullptr) {
                root = new ListNode(sum % 10);
                curr_node = root;
            } else {
                curr_node->next = new ListNode(sum % 10);
                curr_node = curr_node->next;
            }
        }
        if(carry) curr_node->next = new ListNode(1);

        return root;
    }
};
