1class MyQueue {
2public:
3    stack<int> s1;
4    stack<int> s2;
5    MyQueue() {
6        
7    }
8    
9    void push(int x) {
10        while(!s1.empty()) {
11            s2.push(s1.top());
12            s1.pop();
13        }
14
15        s1.push(x);
16
17        while(!s2.empty()) {
18            s1.push(s2.top());
19            s2.pop();
20        }
21    }
22    
23    int pop() {
24        int ans = s1.top();
25        s1.pop();
26        return ans;
27    }
28    
29    int peek() {
30        return s1.top();
31    }
32    
33    bool empty() {
34        return s1.empty();
35    }
36};
37
38/**
39 * Your MyQueue object will be instantiated and called as such:
40 * MyQueue* obj = new MyQueue();
41 * obj->push(x);
42 * int param_2 = obj->pop();
43 * int param_3 = obj->peek();
44 * bool param_4 = obj->empty();
45 */