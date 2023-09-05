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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = head;
        if(head->next == NULL) return head;
        int kn=0;
        while(head != NULL){
         int k=head->val;
         if(head->next!= NULL) kn = head->next->val;
         else break;
         int gcd = __gcd(k,kn);
         ListNode* temp = new ListNode(gcd);
         temp->next = head->next;   
         head->next = temp;
         
         head = temp->next;
        }
        
        return ans;
    }
};