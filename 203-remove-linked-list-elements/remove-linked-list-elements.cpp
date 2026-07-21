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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode dummy(0,head);
        ListNode* prev=&dummy;

        while(temp){
            if(temp->val == val){
                prev->next = temp->next;
                temp=prev;
                
            }else{
                prev=temp;
                temp=temp->next;
            }
            
    }
    return dummy.next;
    }
};