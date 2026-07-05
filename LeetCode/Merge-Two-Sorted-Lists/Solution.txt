1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
14
15        if(h1 == NULL ) return h2;
16        if(h2 == NULL ) return h1;
17
18        if(h1->val <= h2->val) {
19            h1->next = mergeTwoLists(h1->next, h2);
20            return h1;
21        } else {
22            h2->next = mergeTwoLists(h1, h2->next);
23            return h2;
24        }
25
26        return NULL;
27    }
28};