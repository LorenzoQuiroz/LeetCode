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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // value of digit in first ListNode
        int first;
        // value of digit in second ListNode
        int second;
        // carry for when sum of first and second equal more than 9
        int carry = 0;
        
        // head will be the new ListNode for solution
        ListNode *head = new ListNode();
        // tail will be for adding to the ListNode, starting at the head
        ListNode *tail = head;
        
        // while we haven't reached a nullptr or there's a carry
        while (l1 || l2 || carry)
        {
            // initally assign the values to be 0
            first = 0;
            second = 0;
            
            // if l1 is not a nullptr
            if (l1)
            {
                // assign l1's value to first
                first = l1->val;
                // move to the next ListNode
                l1 = l1->next;
            }
            
            // if l2 is not a nullptr
            if (l2)
            {
                // assign l2's value to second
                second = l2->val;
                // move to the next ListNode
                l2 = l2->next;
            }
            
            // add the values, including carry, to a temporary int
            int temp = first + second + carry;
            // create a new ListNode with only the remainder
            tail->next = new ListNode(temp % 10);
            // move to the ListNode just created
            tail = tail->next;
            // assign carry to be what will be added to the next ListNode
            carry = temp / 10;
        }
        
        // return the solution ListNode starting at the next pointer of head
        return head->next;
    }
};