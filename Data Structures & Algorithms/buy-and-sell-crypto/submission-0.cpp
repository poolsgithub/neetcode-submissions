class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, profit = 0;
        int min = prices[0];
        for(auto it:prices){
            buy = it;
            int p = it - min;
            profit = max(p,profit);
            min = std::min(min,buy);
        }

        return profit;
    }
};
