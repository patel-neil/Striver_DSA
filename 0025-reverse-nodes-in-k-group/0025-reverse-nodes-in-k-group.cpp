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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode * nextNode = NULL;
        ListNode * prevNode = NULL;

        while(temp != NULL)
        {
            ListNode * kthNode = findkth(temp, k);

            if(kthNode == NULL)
            {
                if(prevNode)
                {
                    prevNode->next = temp;
                }
                break;
            }
            nextNode = kthNode->next;
            kthNode->next = NULL;
            reverseLL(temp);

            if(temp == head)
            {
                head = kthNode;
            }
            else
            {
                prevNode->next = kthNode;
            }

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }

    ListNode * findkth(ListNode * temp, int k)
    {
        k--;
        while(temp != NULL && k > 0)
        {
            temp = temp ->next;
            k--;
        }

        return temp;
    }

    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* front = NULL;

        while(temp != NULL)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }
};