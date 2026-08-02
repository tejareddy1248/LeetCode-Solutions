1class MyStack {
2public:
3    queue<int> q1;
4    queue<int> q2;
5    MyStack() {
6        
7    }
8    
9    void push(int x) {
10        while(!q1.empty()) {
11            q2.push(q1.front());
12            q1.pop();
13        }
14
15        q1.push(x);
16
17        while(!q2.empty()) {
18            q1.push(q2.front());
19            q2.pop();
20        }
21    }
22    
23    int pop() {
24        int ans = q1.front();
25        q1.pop();
26        return ans;
27    }
28    
29    int top() {
30        return q1.front();
31    }
32    
33    bool empty() {
34        return q1.empty();
35    }
36};
37
38/**
39 * Your MyStack object will be instantiated and called as such:
40 * MyStack* obj = new MyStack();
41 * obj->push(x);
42 * int param_2 = obj->pop();
43 * int param_3 = obj->top();
44 * bool param_4 = obj->empty();
45 */