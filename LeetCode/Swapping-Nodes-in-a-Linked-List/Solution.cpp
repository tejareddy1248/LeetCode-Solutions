1class Solution {
2public:
3    ListNode* swapNodes(ListNode* head, int k) {
4
5        ListNode* first = head;
6
7        for(int i = 1; i < k; i++) {
8            first = first->next;
9        }
10
11        ListNode* temp = first;
12        ListNode* second = head;
13
14        while(temp->next != NULL) {
15            temp = temp->next;
16            second = second->next;
17        }
18
19        swap(first->val, second->val);
20
21        return head;
22    }
23};