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
    void deleteNode(ListNode* middleNode) {
         ListNode* nextNode = middleNode->next;
    middleNode->val = nextNode->val;
    middleNode->next = nextNode->next;

    delete nextNode;
    }
};