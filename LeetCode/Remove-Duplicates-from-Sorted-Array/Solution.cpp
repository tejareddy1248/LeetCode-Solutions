1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.empty()) return 0;
5        
6        int k = 1; 
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] != nums[i - 1]) {
9                nums[k] = nums[i];
10                k++;
11            }
12        }
13        return k;
14    }
15};