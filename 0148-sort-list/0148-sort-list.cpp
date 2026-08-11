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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }

        ListNode * middle = findMiddle(head);

        ListNode * leftHead = head;
        ListNode * rightHead = middle -> next;
        middle ->next = NULL;

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return merge(leftHead, rightHead);
    }

    ListNode * merge(ListNode * left, ListNode * right)
    {
        ListNode * dummyNode = new ListNode(-1);

        ListNode * temp = dummyNode;

        while(left != NULL && right != NULL)
        {
            if(left->val < right->val)
            {
                temp ->next = left;
                left = left ->next;
                temp = temp ->next;
            }
            else
            {
                temp ->next = right;
                right = right ->next;
                temp = temp ->next;
            }
        }

        if(left) temp ->next = left;
        else temp ->next = right;

        return dummyNode->next;
    }

    ListNode * findMiddle(ListNode * head)
    {
        ListNode * slow = head;
        ListNode * fast = head->next;

        while(fast != NULL && fast ->next != NULL)
        {
            slow = slow ->next;
            fast = fast ->next->next;
        }

        return slow;
    }
};