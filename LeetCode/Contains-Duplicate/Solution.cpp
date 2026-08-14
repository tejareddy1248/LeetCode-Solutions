1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int, int> m;
5        for(int i = 0; i < nums.size(); i++) {
6            if(m.find(nums[i]) != m.end()) {
7                return true;
8            }else {
9                m[nums[i]]++;
10            }
11        }
12
13        return false;
14    }
15};