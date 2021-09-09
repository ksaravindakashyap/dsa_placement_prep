// Best Time to Buy and Sell Stock III
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// Find the maximum profit you can achieve. You may complete at most two transactions.
// Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).





class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int firstBuy = INT_MAX;
        int secondBuy = INT_MAX;
        int firstSell = 0;
        int secondSell = 0;
         int n = prices.size();
        for(int i=0;i<n;++i)
        {
            firstBuy = min(firstBuy, prices[i]);
            firstSell = max(firstSell , prices[i] - firstBuy);
            secondBuy = min(secondBuy, prices[i] - firstSell);
            secondSell = max(secondSell, prices[i] - secondBuy);
        }
        return secondSell;
    }
};
