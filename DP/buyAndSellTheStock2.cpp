class Solution {
public:
    // This Approach Will Give Memory Limit Exceed Solution

    // int solve(int index, int buy, vector<int> prices) {
    // if (index == prices.size())
    //     return 0;
    // int profit = 0;
    // int buyIt = 0;
    // int sellIt = 0;
    // if (buy) {
    //     buyIt = (-prices[index] + solve(index + 1, 0, prices));
    //     sellIt = (0 + solve(index + 1, 1, prices));
    //     if (buyIt > sellIt) {
    //         profit = buyIt;
    //     } else {
    //         profit = sellIt;
    //     }
    // } else {
    //     buyIt = (prices[index] + solve(index + 1, 1, prices));
    //     sellIt = (0 + solve(index + 1, 0, prices));
    //     if (buyIt > sellIt) {
    //         profit = buyIt;
    //     } else {
    //         profit = sellIt;
    //     }
    // }
    // return profit;
    // }

    int solve(int index, int buy, vector<int>& prices,
              vector<vector<int>>& dp) {
        if (index == prices.size())
            return 0;

        if (dp[index][buy] != -1) {
            return dp[index][buy];
        }
        int profit = 0;
        int buyIt = 0;
        int sellIt = 0;
        if (buy) {
            buyIt = (-prices[index] + solve(index + 1, 0, prices, dp));
            sellIt = (0 + solve(index + 1, 1, prices, dp));
            if (buyIt > sellIt) {
                profit = buyIt;
            } else {
                profit = sellIt;
            }
        } else {
            buyIt = (prices[index] + solve(index + 1, 1, prices, dp));
            sellIt = (0 + solve(index + 1, 0, prices, dp));
            if (buyIt > sellIt) {
                profit = buyIt;
            } else {
                profit = sellIt;
            }
        }
        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return solve(0, 1, prices, dp);
    }
};