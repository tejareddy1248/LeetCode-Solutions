1class Solution {
2public:
3    int reverse(int x) {
4        int original = x;
5        long reverse = 0;
6
7        while (original != 0) {
8            int digit = original % 10;
9
10            reverse = reverse * 10 + digit;
11
12            original = original / 10;
13
14            if (reverse > INT_MAX || reverse < INT_MIN) {
15                return 0;
16            }
17        }
18        return reverse;
19    }
20};