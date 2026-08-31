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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode * temp = head;
        ListNode * prev = NULL;
        int firstCritic = -1;
        int lastCritic = -1;
        int idx = 0;
        int mini = INT_MAX;

        while(temp != NULL)
        {
            if(prev != NULL && temp -> next != NULL)
            {
                if((prev->val > temp -> val && temp -> val < temp->next -> val) || (prev->val < temp -> val && temp -> val > temp->next -> val))
                {
                    if(firstCritic == -1)
                    {
                        firstCritic = idx;
                    }

                    if(lastCritic != -1)
                    {
                        mini = min(mini,idx - lastCritic);
                    }

                    lastCritic = idx;
                }
            }
            prev = temp;
            temp = temp -> next;
            idx++;
        }

        if(firstCritic == -1 || lastCritic == firstCritic)
        {
            return {-1,-1};
        }

        return {mini, lastCritic - firstCritic};
    }
};