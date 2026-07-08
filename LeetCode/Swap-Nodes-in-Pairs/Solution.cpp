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
13    ListNode* swapPairs(ListNode* head) {
14        if(head == NULL || head->next == NULL) return head;
15
16        ListNode* first = head;
17        ListNode* sec = first->next;
18        ListNode dummy(0);
19        ListNode* prev = &dummy;
20        prev->next = head; 
21        ListNode* newhead = sec;
22
23        while(first != NULL && sec != NULL) {
24            first->next = sec->next;
25            sec->next = first;
26            prev->next = sec;
27            prev = first;
28            first = first->next;
29            if(first != NULL)
30                sec = first->next;
31        }
32
33
34        return newhead;        
35    }
36};