1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        if (nums.size() == 1)
5            return 0;
6
7        int st = 0, end = nums.size() - 1;
8        int mid = 0;
9
10        while (st < end) {
11            mid = st + (end - st) / 2;
12
13            if (nums[mid] < nums[mid + 1]) {
14                st = mid + 1;
15            } else {
16                end = mid ;
17            }
18        }
19        if (nums[mid] > nums[mid + 1]) {
20            return mid;
21        } else {
22            return mid + 1;
23        }
24    }
25};