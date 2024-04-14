class Solution {
public:
    int maxProfit(std::vector<int>& prices) {

        //Striver Approach

        int profit=0, mini=prices[0];

        for(int i=1; i<prices.size(); i++){
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }

        return profit;

        // It is a good approach

        // int buy = prices[0];
        // int profit = 0;
        // for (int i = 1; i < prices.size(); i++) {
        //     if (prices[i] < buy) {
        //         buy = prices[i];
        //     } else if (prices[i] - buy > profit) {
        //         profit = prices[i] - buy;
        //     }
        // }
        // return profit;
    }
};