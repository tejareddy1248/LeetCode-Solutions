1class Solution {
2public:
3    bool Check(int n, int t) {
4        int product = 1;
5
6        while(n) {
7            int digit = n % 10;
8            product *= digit;
9            n /= 10;
10        }
11
12        if(product % t == 0) {
13            return true;
14        }
15
16        return false;
17    }
18
19    int smallestNumber(int n, int t) {
20        while(true) {
21            if(Check(n, t)) {
22                return n;
23            }
24            else {
25                n++;
26            }
27        }
28    }
29};