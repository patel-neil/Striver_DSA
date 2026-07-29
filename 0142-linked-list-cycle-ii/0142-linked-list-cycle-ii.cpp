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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        int k = 0;

        while(fast!= NULL && fast->next != NULL)
        {
            slow = slow ->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                k = findLength(slow, fast);
                break;
            }
        }

        if(k == 0)
        {
            return NULL;
        }

        fast = head;
        slow = head;

        while(k > 0)
        {
            fast = fast -> next;
            k--;
        }

        while(slow != fast)
        {
            slow = slow ->next;
            fast = fast -> next;
        }

        return slow;
    }

    int findLength(ListNode* slow, ListNode* fast)
    {
        int cnt = 1;
        fast = fast->next;
        while(slow != fast)
        {
            cnt++;
            fast = fast->next;
        }
        
        return cnt;
    }
};