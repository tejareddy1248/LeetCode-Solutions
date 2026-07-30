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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(head == NULL) {
15            return NULL;
16        }
17
18        
19        ListNode* curr = head;
20        ListNode* prev = head;
21        ListNode* temp = head;
22        int count = 0;
23        while(temp != NULL) {
24            temp = temp->next;
25            count++;
26        }
27        curr = curr->next;
28        for(int i = 1; i<count; i++) {
29            if(curr->val == prev->val) {
30                prev->next = curr->next;
31                curr->next = NULL;
32                delete curr;
33                curr = prev->next;
34            }else {
35                prev = curr;
36                curr = curr->next;
37            }
38        }
39
40        return head;
41    }
42};