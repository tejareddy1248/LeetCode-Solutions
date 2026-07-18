1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        string temp = "";
5
6        for (int i = s.size() - 1; i >= 0; i--) {
7            temp += s[i];
8        }
9        int count = 0;
10        for (int i = 0; i < temp.size(); i++) {
11
12            if (count == 0 && temp[i] == ' ') {
13                continue;
14            } else if (temp[i] == ' ')
15                return count;
16            else
17                count++;
18        }
19
20        return count;
21    }
22};