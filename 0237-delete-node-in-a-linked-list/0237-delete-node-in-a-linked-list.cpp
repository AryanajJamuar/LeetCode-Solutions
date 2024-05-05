/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {   ListNode *ptr1 = node;
        ListNode *ptr2 = node->next ;
     
     while(ptr2!=NULL)
     {
         ptr1->val = ptr2->val ;
         ptr1 = ptr1->next ;
         ptr2 = ptr2->next ;
        
         
     }
     ptr1 = node ;
     while(ptr1->next->next!=NULL)
     {
         ptr1 = ptr1->next ;
     }
     ptr1->next = NULL ;
     
    }
};