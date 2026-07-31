1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4
5        long long ans = 1;
6        int N = m + n - 2;
7        int r = min(m - 1, n - 1);
8
9        for (int i = 1; i <= r; i++) {
10            ans = ans * (N - r + i) / i;
11        }
12
13        return (int)ans;
14    }
15};