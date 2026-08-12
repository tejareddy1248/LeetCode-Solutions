1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4    long long fmax = LLONG_MIN;
5    long long smax = LLONG_MIN;
6    long long tmax = LLONG_MAX;
7
8    for(int x: nums) {
9
10        if(x == fmax || x == smax || x == tmax) {
11            continue;
12        }
13
14        if(x > fmax) {
15            tmax = smax;
16            smax = fmax;
17            fmax = x;
18        }else if(x > smax) {
19            tmax = smax;
20            smax = x;
21        }else if(x > tmax)
22            tmax = x;
23        }
24
25        if(tmax == LLONG_MIN) {
26            return fmax;
27        }
28
29        return tmax;
30    }
31};