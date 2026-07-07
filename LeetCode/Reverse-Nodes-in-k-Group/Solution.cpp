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
11/**
12 * Definition for singly-linked list.
13 * struct ListNode {
14 *     int val;
15 *     ListNode *next;
16 *     ListNode() : val(0), next(nullptr) {}
17 *     ListNode(int x) : val(x), next(nullptr) {}
18 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
19 * };
20 */
21
22class Solution {
23public:
24    ListNode* reverseKGroup(ListNode* head, int k) {
25
26        if (head == NULL || k == 1)
27            return head;
28
29        // Count total nodes
30        int count = 0;
31        ListNode* temp = head;
32
33        while (temp != NULL) {
34            count++;
35            temp = temp->next;
36        }
37
38        ListNode dummy(0);
39        dummy.next = head;
40
41        ListNode* prev = &dummy;
42        ListNode* curr = head;
43        ListNode* next = NULL;
44
45        while (count >= k) {
46
47            curr = prev->next;
48            next = curr->next;
49
50            // Reverse k nodes
51            for (int i = 1; i < k; i++) {
52                curr->next = next->next;
53                next->next = prev->next;
54                prev->next = next;
55                next = curr->next;
56            }
57
58            prev = curr;
59            count -= k;
60        }
61
62        return dummy.next;
63    }
64};