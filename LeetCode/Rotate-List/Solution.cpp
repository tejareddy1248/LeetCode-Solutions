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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(head == NULL)    return head;
15
16        ListNode* temp = head;
17        int count = 1;
18
19        while(temp->next != NULL) {
20            temp = temp->next;
21            count++;
22        }
23        
24        k = k % count;
25        if(k == 0) return head;
26
27        count = count - k;
28        ListNode* tail = head;
29        ListNode* newhead = NULL;
30
31        for(int i=0; i<count-1; i++) {
32            tail = tail->next;
33        }
34
35        newhead = tail->next;
36        tail->next = NULL;
37        temp->next = head;
38
39        return newhead;
40
41    }
42};