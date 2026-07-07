1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12class Solution {
13public:
14    Node* flatten(Node* head) {
15        if(head == NULL) {
16            return head;
17        }
18
19        Node* curr = head;
20        while(curr != NULL) {
21            if(curr->child != NULL) {
22                Node* next = curr->next;
23                curr->next = flatten(curr->child);
24
25                curr->next->prev = curr;
26                curr->child = NULL;
27
28                while(curr->next != NULL) {
29                    curr = curr->next;
30                }
31
32                if(next != NULL) {
33                    curr->next = next;
34                    next->prev = curr;
35                }
36            }
37            curr = curr->next;
38        }
39
40        return head;
41    }
42};