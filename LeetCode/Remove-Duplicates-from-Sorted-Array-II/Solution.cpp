1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4
5        int n = nums.size();
6
7        if(n <= 2)
8            return n;
9
10        int k = 2;
11
12        for(int i = 2; i < n; i++) {
13            if(nums[i] != nums[k - 2]) {
14                nums[k] = nums[i];
15                k++;
16            }
17        }
18
19        return k;
20    }
21};