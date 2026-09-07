1class Solution {
2public:
3    string countAndSay(int n) {
4        string s = "1";
5
6        for (int i = 1; i < n; i++) {
7            string next = "";
8
9            for (int j = 0; j < s.length(); ) {
10                char ch = s[j];
11                int count = 0;
12
13                while (j < s.length() && s[j] == ch) {
14                    count++;
15                    j++;
16                }
17
18                next += to_string(count);
19                next += ch;
20            }
21
22            s = next;
23        }
24
25        return s;
26    }
27};