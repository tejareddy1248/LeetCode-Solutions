1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n = heights.size();
5        vector <int> right(n,0);
6        vector <int> left(n,0);
7        stack<int> s;
8
9        for(int i=n-1; i>=0; i--) {
10            while(s.size() > 0 && heights[s.top()] >= heights[i]) {
11                s.pop();
12            }
13
14            right[i] = s.empty() ? n:s.top();
15            s.push(i);
16        }
17
18        while(s.size()) {
19            s.pop();
20        }
21
22        for(int i=0; i<n; i++) {
23            while(s.size() > 0 && heights[s.top()] >= heights[i]) {
24                s.pop();
25            }
26
27            left[i] = s.empty() ? -1:s.top();
28            s.push(i);
29        }
30
31        int MaxArea = 0;
32        for(int i=0; i<n; i++) {
33            int width = right[i] - left[i] - 1;
34            int area = heights[i] * width;
35            MaxArea = max(MaxArea, area);
36        }
37
38        return MaxArea;
39    }
40};