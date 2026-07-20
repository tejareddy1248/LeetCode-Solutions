1class MinStack {
2public:
3    stack<pair<int, int>> s;
4    MinStack() {
5        
6    }
7    
8    void push(int val) {
9        if(s.empty()) {
10            s.push({val, val});
11        }else {
12            int minVal = min(val ,s.top().second);
13            s.push({val, minVal});
14        }
15    }
16    
17    void pop() {
18        s.pop();
19    }
20    
21    int top() {
22        return s.top().first;
23    }
24    
25    int getMin() {
26        return s.top().second;
27    }
28};
29
30/**
31 * Your MinStack object will be instantiated and called as such:
32 * MinStack* obj = new MinStack();
33 * obj->push(value);
34 * obj->pop();
35 * int param_3 = obj->top();
36 * int param_4 = obj->getMin();
37 */