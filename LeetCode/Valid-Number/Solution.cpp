1class Solution {
2public:
3    bool isNumber(string s) {
4        int n = s.size();
5        int i = 0;
6
7        if (i < n && (s[i] == '+' || s[i] == '-'))
8            i++;
9
10        bool digit = false;
11
12        while (i < n && isdigit(s[i])) {
13            digit = true;
14            i++;
15        }
16
17        if (i < n && s[i] == '.') {
18            i++;
19
20            while (i < n && isdigit(s[i])) {
21                digit = true;
22                i++;
23            }
24        }
25
26        if (!digit)
27            return false;
28
29        if (i < n && (s[i] == 'e' || s[i] == 'E')) {
30            i++;
31
32            if (i < n && (s[i] == '+' || s[i] == '-'))
33                i++;
34
35            bool exponentDigit = false;
36
37            while (i < n && isdigit(s[i])) {
38                exponentDigit = true;
39                i++;
40            }
41
42            if (!exponentDigit)
43                return false;
44        }
45
46        return i == n;
47    }
48};