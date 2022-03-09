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
    ListNode* deleteDuplicates(ListNode* head) {
        // current pointer starts at the head
        ListNode* cur = head;
        // deletion pointer to prevent memory leaks
        ListNode* del;
        // while the current pointer is not a nullptr and the current pointer's next pointer is not a nullptr
        while (cur && cur->next)
        {
            // if the current pointer's value equals the current pointers's next value
            if (cur->val == cur->next->val)
            {
                // assign the deletion pointer to the current pointer's next pointer
                del = cur->next;
                // assign the current pointer's next pointer to be the current next pointer's next pointer
                cur->next = cur->next->next;
                // delete the duplicate ListNode to free up memory
                delete del;
            }
            // else the current pointer's value does not equal the current pointer's next value
            else
            {
                // assign the current pointer to the current pointer's next pointer
                cur = cur->next;
            }
        }
        // return the head of the linked list
        return head;
    }
};