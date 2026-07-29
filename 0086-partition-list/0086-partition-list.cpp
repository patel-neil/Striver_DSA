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
    ListNode* partition(ListNode* head, int x) {

        ListNode* lessThan = new ListNode(-1);
        ListNode* greatThan = new ListNode(-1);

        ListNode* lessMover = lessThan;
        ListNode* greatMover = greatThan;

        ListNode * temp = head;

        while(temp != NULL)
        {
            if(temp ->val < x)
            {
                lessMover->next = temp;
                lessMover = lessMover->next;
            }
            else
            {
                greatMover->next = temp;
                greatMover = greatMover->next;
            }
            temp = temp ->next;
        }

        lessMover->next = (greatThan->next) ? greatThan->next : NULL;

        greatMover->next = NULL;

        return lessThan->next;
    }
};