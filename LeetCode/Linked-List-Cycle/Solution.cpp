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
11    bool hasCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        while(fast != NULL && fast->next != NULL ) {
15
16            slow = slow->next;
17            fast = fast->next->next;
18
19            if(slow == fast)   
20                return true;
21        }
22        return false;
23    }
24};