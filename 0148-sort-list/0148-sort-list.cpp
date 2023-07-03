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
    ListNode* sortList(ListNode* head) {
  vector<int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.rbegin(), v.rend());
        ListNode* ans = NULL;
        for(int i=0; i<v.size(); i++){
            ans = new ListNode(v[i], ans);
        }
        return ans;
    }
};