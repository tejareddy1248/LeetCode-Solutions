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
13    ListNode* removeElements(ListNode* head, int val) {
14        if(head == NULL) {
15            return head;
16        }
17        ListNode* dummy = new ListNode(-1);
18        ListNode* prev = dummy;
19        ListNode* curr = head;
20
21        while(curr != NULL) {
22            if(curr->val == val){
23                prev->next = curr->next;
24                curr->next = NULL;
25                delete curr;
26                curr = prev->next;
27            }else {
28                prev->next = curr;
29                prev = curr;
30                curr = curr->next;
31            }
32        }
33
34        return dummy->next;
35    }
36};