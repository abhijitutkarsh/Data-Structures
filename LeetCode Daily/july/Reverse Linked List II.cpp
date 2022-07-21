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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
      if(head == NULL || head->next == NULL) return head;
        
    ListNode* dummy = new ListNode  (-1);
        
        dummy -> next = head;
        
        ListNode* cur = dummy;
        
        ListNode* preCur = dummy;
        
        for(int i =0 ; i<left ; i++)
        {
            preCur = cur;
            cur = cur->next;
        }
        
        ListNode* curA =cur;
        ListNode* preCurA = preCur;
        int i;
        for( i=left; i<=right ; i++)
        {
            ListNode* nexti = curA -> next;
            curA ->next = preCurA;
            preCurA = curA;
            curA = nexti;
        }
    
        preCur ->next =preCurA;
        cur->next =curA;
        
        
        return dummy->next;
    }
};