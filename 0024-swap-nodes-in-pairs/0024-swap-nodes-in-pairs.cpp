class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;
        ListNode* front = temp->next;
        
        head = front; 

        while (temp != NULL && front != NULL) {
            ListNode* nextPair = front->next; 

            if (nextPair != NULL && nextPair->next != NULL) {
                temp->next = nextPair->next; 
            } 
            else {
                temp->next = nextPair;
            }
            front->next = temp;

            temp = nextPair;
            if (temp != NULL) {
                front = temp->next;
            } else {
                front = NULL;
            }
        }

        return head;
    }
};