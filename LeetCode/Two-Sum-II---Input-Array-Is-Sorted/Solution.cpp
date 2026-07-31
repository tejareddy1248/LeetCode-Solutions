1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int tar) {
4        int st = 0, end = nums.size()-1;
5        vector <int> ans; 
6        while(st < end) {
7            int key = nums[st] + nums[end];
8            if(key < tar) {
9                st++;
10            }else if(key > tar) {
11                end--;
12            }else {
13                ans.push_back(st+1);
14                ans.push_back(end+1);
15                break;
16            }
17        }
18
19        return ans;
20    }
21};