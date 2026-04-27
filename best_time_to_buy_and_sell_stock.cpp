class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  min_Price = INT_MAX;
        int max_Profit = {0};

        for(int i = {0}; i < prices.size(); i++){
            if (prices[i] < min_Price){
                min_Price = prices[i];
            }
            else{
                int profit = prices[i] - min_Price;
                max_Profit = max(max_Profit, profit);
            }
        }
        return max_Profit;
    }
};
