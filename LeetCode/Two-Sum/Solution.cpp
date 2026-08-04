1#include <vector>
2#include <unordered_map>
3using namespace std;
4
5class Solution {
6public:
7    vector<int> twoSum(vector<int>& nums, int target) {
8        unordered_map<int, int> mp;
9
10        for (int i = 0; i < nums.size(); i++) {
11            int complement = target - nums[i];
12
13            if (mp.find(complement) != mp.end()) {
14                return {mp[complement], i};
15            }
16
17            mp[nums[i]] = i;
18        }
19
20        return {};
21    }
22};