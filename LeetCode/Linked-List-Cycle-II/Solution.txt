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
11    ListNode *detectCycle(ListNode *head) {
12        if(head == NULL) return NULL;
13        ListNode* slow = head;
14        ListNode* fast = head;
15        bool isCycle = false;
16        while(fast != NULL && fast->next != NULL ) {
17
18            slow = slow->next;
19            fast = fast->next->next;
20
21            if(slow == fast) {
22                isCycle = true;
23                break;
24            }
25        }
26
27        if(isCycle == false) return NULL;
28        
29        slow = head;
30        while(slow != fast) {
31
32            slow = slow->next;
33            fast = fast->next;
34        }
35
36        return slow;
37    }
38};