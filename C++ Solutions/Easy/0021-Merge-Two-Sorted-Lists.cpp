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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if list2 is NULL
        if (list2 == nullptr)
        {
            // return the other list
            return list1;
        }
        // else if list1 is NULL
        else if (list1 == nullptr)
        {
            // return the other list
            return list2;
        }
        // else list1 != nullptr && list2 != nullptr
        else
        {
            // instantiate the solution ListNode list3 with its value being INT_MIN
            ListNode list3(INT_MIN);
            // instantiate a ListNode tail at list3
            ListNode *tail = &list3;
            // while neither list is NULL
            while (list1 != nullptr && list2 != nullptr)
            {
                // if list1's smallest value is < list2's smallest value
                if (list1->val < list2->val)
                {
                    // have the tail's next pointer point to the smaller value
                    tail->next = list1;
                    // in list1, move to the next node
                    list1 = list1->next;
                }
                // else list2's smallest value is <= list1's smallest value
                else
                {
                    // have the tail's next pointer point to the smaller value
                    tail->next = list2;
                    // in list2, move to the next node
                    list2 = list2->next;
                }
                // in tail, move to the added node
                tail = tail->next;
            }
            // if we reached the end of list2
            if (list2 == nullptr)
            {
                // have the tail's next pointer point to the list1
                tail->next = list1;
            }
            // else we reached the end of list1
            else
            {
                // have the tail's next pointer point to the list2
                tail->next = list2;
            }
            // return the solution list3 with the next ListNode after INT_MIN
            return list3.next;
        }
    }
};