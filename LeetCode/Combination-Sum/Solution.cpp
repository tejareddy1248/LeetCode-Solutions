1class Solution {
2public:
3    set<vector<int>> s;
4
5    void comSum(const vector<int>& nums,
6                vector<int>& temp,
7                int tar,
8                int i,
9                vector<vector<int>>& ans) {
10
11        if(tar == 0) {
12            if(s.find(temp) == s.end()) {
13                ans.push_back(temp);
14                s.insert(temp);
15            }
16            return;
17        }
18
19        if(tar < 0 || i == nums.size())
20            return;
21
22        temp.push_back(nums[i]);
23
24        // take current number
25        comSum(nums, temp, tar - nums[i], i, ans);
26
27        temp.pop_back();
28
29        // skip current number
30        comSum(nums, temp, tar, i + 1, ans);
31    }
32
33    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
34        vector<vector<int>> ans;
35        vector<int> temp;
36
37        comSum(candidates, temp, target, 0, ans);
38
39        return ans;
40    }
41};