1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int tar) {
4        int st=0, end=nums.size()-1;
5        int mid = 0;
6        while(st<=end) {
7            mid = st + (end - st) / 2;
8
9            if(nums[mid] == tar) return mid;
10            if(nums[mid] < tar) {
11                st = mid + 1;
12            }else if(nums[mid] > tar) {
13                end = mid-1;
14            }
15        }
16
17        int temp = nums[mid] - tar;
18        if(temp > 0) {
19            return mid;
20        }else {
21            return mid+1;
22        }
23
24        return -1;
25    }
26};