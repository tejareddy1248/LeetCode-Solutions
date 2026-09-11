1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int maxProfit = 0 , bestBuy = prices[0];
5
6        for(int i=1 ; i<prices.size();i++){
7            if(prices[i]>bestBuy){
8                maxProfit=max(maxProfit,prices[i]-bestBuy);
9            }
10            bestBuy=min(bestBuy,prices[i]);
11        }
12        return maxProfit;
13    }
14};