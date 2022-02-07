/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // have the previous node be NULL
        ListNode* previous = NULL;
        // have the current node be at head
        ListNode* current = head;
        // have a next node
        ListNode* n;
        // while the current node is not NULL
        while (current != NULL)
        {
            // assign the next node to be at the current node's next pointer
            n = current->next;
            // assign the current node's next pointer to point to the previous node
            current->next = previous;
            // assign the previous node to be at the current node
            previous = current;
            // assign the current node to be at the next node
            current = n;
        }
        // return the previous node
        return previous;
    }
};