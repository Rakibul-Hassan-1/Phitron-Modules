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
int size(ListNode* head){
    int cnt = 0;
    ListNode* temp = head;
    while(temp != NULL){
        cnt++;
        temp  = temp->next;
    }
    return cnt;
}
    ListNode* middleNode(ListNode* head) {
        ListNode * temp = head;
        int sz = size(head);
        for(int i = 1; i<=sz/2; i++){
            temp = temp->next;
        }
        return temp;

    }
};