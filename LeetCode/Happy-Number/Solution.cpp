1class Solution {
2public:
3
4    int sum(int n) {
5        int sum = 0; 
6        while(n){
7            int digit = n%10;
8            sum += digit*digit;
9            n = n/10;
10        }
11        return sum;
12    }
13    bool isHappy(int n) {
14        
15        unordered_set<int> s;
16
17        while(n != 1) {
18            if(s.count(n)){
19                return false;
20            }
21            s.insert(n);
22
23            n = sum(n);
24        }
25
26        return true;
27    }
28};