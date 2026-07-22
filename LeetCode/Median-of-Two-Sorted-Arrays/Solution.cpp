1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int n = nums1.size();
5        int m = nums2.size();
6        vector<int> arr(n+m,0);
7        
8        int a=0, b=0 ,i=0;
9        while(a<n && b<m) {
10            if(nums1[a] < nums2[b]) {
11                arr[i++] = nums1[a++];
12            }else {
13                arr[i++] = nums2[b++];
14            }
15        }
16        if(a<n) {
17            while(a<n) {
18                arr[i++] = nums1[a++];
19            }
20        }else if(b<m) {
21            while(b<m) {
22                arr[i++] = nums2[b++];
23            }
24        }
25        
26        double ans = 0;
27
28        if((n+m)%2 != 0) {
29            int k = (n+m) / 2;
30            ans = arr[k];
31        }else {
32            int k = ((n+m) / 2)-1;
33            ans = (arr[k] + arr[k+1])/2.0;
34        }
35
36        return ans;
37    }
38};