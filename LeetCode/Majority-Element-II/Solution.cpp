1class Solution { 
2public: 
3    vector<int> majorityElement(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<int> ans;
6        int n = nums.size();
7        if (n == 0) return ans;
8
9        int freq = 1;
10        int temp = nums[0];
11
12        for (int i = 1; i < n; i++) {
13            if (nums[i] == temp) {
14                freq++;
15            } else {
16                if (freq > n / 3) {
17                    ans.push_back(temp);
18                }
19                temp = nums[i];
20                freq = 1; 
21            }
22        }
23        
24        if (freq > n / 3) {
25            ans.push_back(temp);
26        }
27
28        return ans;
29    } 
30};
31