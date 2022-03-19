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
    ListNode* mergeNodes(ListNode* head) {
        // have head be the head's next Node, unlinking the Node with a value of 0
        head = head->next;
        // initialize start Node at head
        ListNode* start = head;
        // while start is not a null ptr
        while (start)
        {
            // initialize the sum to 0
            int sum = 0;
            // initialize end Node at start
            ListNode* end = start;
            // while end Node's value is not 0
            while (end->val != 0)
            {
                // add end Node's value to the sum
                sum += end->val;
                // have end be the end's next Node
                end = end->next;
            }
            // have the start Node's value be the sum
            start->val = sum;
            // have start Node's next pointer be the end Node's next pointer, unlinking the Node with a value of 0
            start->next = end->next;
            // have start be the start's next Node
            start = start->next;
        }
        // return the head of the Node
        return head;
    }
};