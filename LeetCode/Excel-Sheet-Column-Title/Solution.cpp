1class Solution {
2public:
3    string convertToTitle(int num) {
4        string ans = "";
5
6        while(num) {
7            num--;
8            int dig = num % 26;
9            num = num / 26;
10            int ch = 'A' + dig;
11            ans += ch; 
12        }
13
14        reverse(ans.begin(), ans.end());
15
16        return ans;
17    }
18};