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
13
14    ListNode* merge(ListNode* l1, ListNode* l2) {
15
16        ListNode dummy(0);
17        ListNode* tail = &dummy;
18
19        while (l1 != NULL && l2 != NULL) {
20
21            if (l1->val <= l2->val) {
22                tail->next = l1;
23                l1 = l1->next;
24            }
25            else {
26                tail->next = l2;
27                l2 = l2->next;
28            }
29
30            tail = tail->next;
31        }
32
33        if (l1 != NULL)
34            tail->next = l1;
35        else
36            tail->next = l2;
37
38        return dummy.next;
39    }
40
41    ListNode* mergeKLists(vector<ListNode*>& lists) {
42
43        if (lists.size() == 0)
44            return NULL;
45
46        int interval = 1;
47
48        while (interval < lists.size()) {
49
50            for (int i = 0; i + interval < lists.size(); i += 2 * interval) {
51
52                lists[i] = merge(lists[i], lists[i + interval]);
53
54            }
55
56            interval *= 2;
57        }
58
59        return lists[0];
60    }
61};