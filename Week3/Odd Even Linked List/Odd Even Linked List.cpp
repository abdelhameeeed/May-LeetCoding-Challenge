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
    ListNode* oddEvenList(ListNode* head) {
        if( head == NULL || head -> next == NULL )  return head ;
        int C = 2 ;
        ListNode *prev = head       ;
        ListNode *cur = head->next  ;
        ListNode *Lastodd = prev    ;
        while( 1 )
        {
            prev = cur ;
            cur  = cur -> next ;
            if( cur == NULL ) break ;
            ++C ;
            if( C % 2 == 1 )
            {

                   ListNode *temp = Lastodd -> next ;
                   Lastodd -> next = cur ;
                   prev -> next = cur -> next ;
                   cur -> next = temp   ;
                   Lastodd = cur ;
                   cur = prev ;
            }

        }
        return head ;
    }
};
