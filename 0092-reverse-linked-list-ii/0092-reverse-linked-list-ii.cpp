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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {   vector <int> ans ;
        ListNode* ptr = head ;
        while(ptr)
        { ans.push_back(ptr->val) ;
         ptr = ptr->next ;
            
        }
     reverse(ans.begin()+left-1,ans.begin()+right) ;
     int i= 0 ;
     ptr = head ;
     while(ptr)
     {
         ptr->val = ans[i] ;
         i++ ;
         ptr = ptr->next ;
     }
       return head ;
    }
};