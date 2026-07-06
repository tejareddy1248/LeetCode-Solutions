1class Solution {
2public:
3    Node* copyRandomList(Node* head) {
4
5        if (head == NULL)
6            return NULL;
7
8        unordered_map<Node*, Node*> mp;
9
10        // Create copy of head
11        Node* newHead = new Node(head->val);
12        mp[head] = newHead;
13
14        Node* oldTemp = head->next;
15        Node* newTemp = newHead;
16
17        // Step 1: Copy next pointers
18        while (oldTemp != NULL) {
19            Node* copyNode = new Node(oldTemp->val);
20
21            newTemp->next = copyNode;
22            mp[oldTemp] = copyNode;
23
24            oldTemp = oldTemp->next;
25            newTemp = newTemp->next;
26        }
27
28        // Step 2: Copy random pointers
29        oldTemp = head;
30        newTemp = newHead;
31
32        while (oldTemp != NULL) {
33            if (oldTemp->random != NULL)
34                newTemp->random = mp[oldTemp->random];
35
36            oldTemp = oldTemp->next;
37            newTemp = newTemp->next;
38        }
39
40        return newHead;
41    }
42};