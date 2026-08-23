1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int> dq;
5        vector<int> res;
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            if (!dq.empty() && dq.front() <= i - k) {
10                dq.pop_front();
11            }
12
13            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
14                dq.pop_back();
15            }
16
17            dq.push_back(i);
18
19            if (i >= k - 1) {
20                res.push_back(nums[dq.front()]);
21            }
22        }
23
24        return res;
25    }
26};