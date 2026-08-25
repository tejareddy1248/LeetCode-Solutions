1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int total = 0;
5        int tank = 0;
6        int start = 0;
7
8        for (int i = 0; i < gas.size(); i++) {
9            int diff = gas[i] - cost[i];
10
11            total += diff;
12            tank += diff;
13
14            if (tank < 0) {
15                start = i + 1;
16                tank = 0;
17            }
18        }
19
20        if (total < 0)
21            return -1;
22
23        return start;
24    }
25};