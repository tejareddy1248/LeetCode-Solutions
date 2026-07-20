1class Solution {
2public:
3    int search(int tar, vector<int>& arr) {
4        for (int i = 0; i < arr.size(); i++) {
5            if (tar == arr[i])
6                return i;
7        }
8        return -1;
9    }
10
11    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
12        stack<int> s;
13        vector<int> ans(nums2.size());
14
15        for (int i = nums2.size() - 1; i >= 0; i--) {
16            while (!s.empty() && s.top() <= nums2[i]) {
17                s.pop();
18            }
19
20            if (s.empty())
21                ans[i] = -1;
22            else
23                ans[i] = s.top();
24
25            s.push(nums2[i]);
26        }
27
28        vector<int> res;
29
30        for (int i = 0; i < nums1.size(); i++) {
31            int k = search(nums1[i], nums2);
32            res.push_back(ans[k]);
33        }
34
35        return res;
36    }
37};