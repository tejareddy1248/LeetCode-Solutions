1class LRUCache {
2public:
3
4    class Node {
5    public:
6        int key, value;
7        Node* prev;
8        Node* next;
9
10        Node(int k, int v) {
11            key = k;
12            value = v;
13            prev = next = NULL;
14        }
15    };
16
17    int capacity;
18    unordered_map<int, Node*> mp;
19    Node* head;
20    Node* tail;
21
22    LRUCache(int capacity) {
23        this->capacity = capacity;
24
25        head = new Node(-1, -1);
26        tail = new Node(-1, -1);
27
28        head->next = tail;
29        tail->prev = head;
30    }
31
32    void deleteNode(Node* node) {
33        Node* prevNode = node->prev;
34        Node* nextNode = node->next;
35
36        prevNode->next = nextNode;
37        nextNode->prev = prevNode;
38    }
39
40    void insertNode(Node* node) {
41        node->next = head->next;
42        node->prev = head;
43
44        head->next->prev = node;
45        head->next = node;
46    }
47
48    int get(int key) {
49
50        if (mp.find(key) == mp.end())
51            return -1;
52
53        Node* node = mp[key];
54
55        deleteNode(node);
56        insertNode(node);
57
58        return node->value;
59    }
60
61    void put(int key, int value) {
62
63        if (mp.find(key) != mp.end()) {
64
65            Node* node = mp[key];
66            node->value = value;
67
68            deleteNode(node);
69            insertNode(node);
70
71            return;
72        }
73
74        if (mp.size() == capacity) {
75
76            Node* lru = tail->prev;
77
78            deleteNode(lru);
79            mp.erase(lru->key);
80            delete lru;
81        }
82
83        Node* node = new Node(key, value);
84
85        insertNode(node);
86        mp[key] = node;
87    }
88};
89
90/**
91 * Your LRUCache object will be instantiated and called as such:
92 * LRUCache* obj = new LRUCache(capacity);
93 * int param_1 = obj->get(key);
94 * obj->put(key,value);
95 */