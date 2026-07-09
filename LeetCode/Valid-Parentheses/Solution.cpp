1class Solution {
2public:
3    bool isValid(string str) {
4        stack<char> st;
5
6        for(int i=0; i<str.size(); i++) {
7            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
8                st.push(str[i]);
9            }else {
10                if(st.size() == 0) return false;
11
12                if(str[i] == ')' && st.top() == '(' || str[i] == '}' && st.top() == '{' || str[i] == ']' && st.top() == '[') {
13                    st.pop();
14                }
15                else
16                    return false;
17            }
18        }
19
20        return st.size() == 0;
21    }
22};