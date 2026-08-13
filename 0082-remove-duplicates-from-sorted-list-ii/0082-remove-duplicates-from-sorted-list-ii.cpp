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
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode * curr = head;
        ListNode * prev = NULL;

        while(curr != NULL && curr->next != NULL)
        {
            if(curr->val != curr->next->val)
            {
                prev = curr;
                curr = curr->next;
            }
            else
            {
                ListNode * dup = curr ->next;

                while((dup != NULL) && (dup->val == curr->val))
                {
                    dup = dup ->next;
                }
                if(prev != NULL)
                {
                    prev->next = dup;
                }
                else
                {
                    head = dup;
                }
                curr = dup;
            }
        }

        return head;
    }
};