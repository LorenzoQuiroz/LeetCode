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
    bool hasCycle(ListNode *head) {
        // slow pointer starts at the head
        ListNode *slow = head;
        // fast pointer starts at the head
        ListNode *fast = head;
        // while fast is not a nullptr and fast's next pointer is not a nullptr
        // (while there are ListNodes to read)
        while (fast && fast->next)
        {
            // slow is assigned to its next pointer
            slow = slow->next;
            // fast is assigned to its next next pointer
            fast = fast->next->next;
            // if the two different ListNodes are equal
            if (slow == fast)
            {
                // the linked list has a cycle
                return true;
            }
        }
        // the linked list does not have a cycle
        // (there were no more ListNodes to read)
        return false;
    }
};