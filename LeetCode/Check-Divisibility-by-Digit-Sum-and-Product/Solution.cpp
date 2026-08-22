1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int temp = n;
5        int sum = 0;
6        int mul = 1;
7        while(temp) {
8            sum += (temp%10);
9            mul *= (temp%10);
10            temp = temp / 10;
11        }
12
13        int tot = sum + mul;
14        if((n % tot) == 0) {
15            return true;
16        }
17        
18        return false;
19    }
20};