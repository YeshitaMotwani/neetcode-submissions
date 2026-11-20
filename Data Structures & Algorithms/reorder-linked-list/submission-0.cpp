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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode *l1=NULL,*l2=NULL;


        //1. To find the mid-point of LL
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow - mid-point of LL
        l1=head; //1st half of LL
        l2=slow->next; //2nd half of LL
        slow->next = NULL; // Disconnect first half from second half
        
        //2. Reverse l2 LL
        ListNode *prev=NULL,*curr=l2,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //prev - head of reversed LL(l2)
        l2=prev;

        //3. Alternate Merging
        ListNode* first=head;
        while(l2!=NULL){
            ListNode* tmp1=first->next;
            ListNode* tmp2=l2->next;
            first->next=l2;
            l2->next=tmp1;
            first=tmp1;
            l2=tmp2;
        }

    }
};
