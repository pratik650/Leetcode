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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode* temp = head;

    // Handle the case when n is equal to 1 and there's only one node in the list
    if (n == 1 && head->next == nullptr) {
        delete head;
        return nullptr;
    }

    // Find the total number of nodes in the list
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    int diff = count - n;

    // Reset temp to the beginning of the list
    temp = head;

    // Handle the case when you need to remove the head node
    if (diff == 0) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    // Move temp2 to the node just before the one to be removed
    ListNode* temp2 = head;
    while (diff != 1) {
        temp2 = temp2->next;
        diff--;
    }

    // Remove the desired node
    ListNode* toDelete = temp2->next;
    temp2->next = temp2->next->next;
    delete toDelete;

    return head;
    }
};