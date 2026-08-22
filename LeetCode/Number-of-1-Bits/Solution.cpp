1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count = 0;
5        while(n) {
6            if(n%2 == 1) {
7                count++;
8            }
9
10            n /= 2;
11        }
12
13        return count;
14    }
15};