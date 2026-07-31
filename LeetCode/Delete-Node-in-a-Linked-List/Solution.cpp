1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* curr) {
12        if (curr->next == NULL) {
13            delete curr;
14            return;
15        }
16        ListNode* next = curr->next;
17        curr->val = curr->next->val;
18        curr->next = curr->next->next;
19        next->next = NULL;
20        delete next;
21        
22        return;
23    }
24};