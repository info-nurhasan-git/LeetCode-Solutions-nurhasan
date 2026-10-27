class Solution {
public:
    ListNode *getIntersectionNode(ListNode *L, ListNode *R) {
        ListNode* a = L;
        ListNode* b = R;
        while(a!=b){
            if(a==NULL) a = R;
            else a = a->next;
            if(b==NULL) b = L;
            else b = b->next;
        }
        return a;
    }
};