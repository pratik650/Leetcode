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
    ListNode* swapNodes(ListNode* head, int k) {
      ListNode* start = new ListNode();
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;

        for(int i = 0 ; i<k ;i++){
            fast = fast->next;
        }

        ListNode* temp = fast;

        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        
        int data = temp->val;
        temp->val = slow->val;
        slow->val = data;

        return head;   
    }
};