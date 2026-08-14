1class Solution {
2public:
3    bool isVowel(char c) {
4        c = tolower(c);
5
6        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
7    }
8
9    string reverseVowels(string s) {
10        int n = s.size();
11
12        int st = 0;
13        int end = n - 1;
14
15        while (st < end) {
16
17            while (st < end && !isVowel(s[st])) {
18                st++;
19            }
20
21            while (st < end && !isVowel(s[end])) {
22                end--;
23            }
24
25            swap(s[st], s[end]);
26
27            st++;
28            end--;
29        }
30
31        return s;
32    }
33};