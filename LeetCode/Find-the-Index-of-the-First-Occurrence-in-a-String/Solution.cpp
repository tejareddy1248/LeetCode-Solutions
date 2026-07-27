1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if (needle.empty())
5            return 0;
6        int n = haystack.size(), m = needle.size();
7
8        for (int i = 0; i <= n - m; i++) {
9            int j = 0;
10            for (; j < m; j++) {
11                if (haystack[i + j] != needle[j]) {
12                    break;
13                }
14            }
15            if (j == m) {
16                return i;
17            }
18        }
19        return -1;
20    }
21};