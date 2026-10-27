class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* t = &dummy;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                t->next = l1;
                l1 = l1->next;
            }
            else {
                t->next = l2;
                l2 = l2->next;
            }

            t = t->next;
        }

        if (l1 != NULL) {
            t->next = l1;
        }
        else {
            t->next = l2;
        }

        return dummy.next;
    }
};