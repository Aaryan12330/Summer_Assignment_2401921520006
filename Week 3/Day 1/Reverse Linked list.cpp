class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *next;

        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }
};
