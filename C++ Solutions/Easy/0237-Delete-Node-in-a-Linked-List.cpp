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
    void deleteNode(ListNode* node) {
        // assign node temp at the current node's next pointer
        ListNode* temp = node->next;
        // to have the value removed, have the current node's value be the temp node's value
        node->val = temp->val;
        // to remove the node from the linked list, have the current node's next pointer point to the temp node's next pointer
        node->next = temp->next;
        // to delete the removed node and free up space, delete the node temp
        delete temp;
    }
};