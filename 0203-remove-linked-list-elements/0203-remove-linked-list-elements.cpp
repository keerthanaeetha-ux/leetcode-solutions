class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;
            } else {
                prev = temp;
            }
            temp = temp->next;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // prevent memory leak
        return newHead;
    }
};