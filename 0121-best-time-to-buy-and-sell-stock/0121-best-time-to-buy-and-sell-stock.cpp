class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_Profit = 0;
        int buy_Price = prices[0];

        for(int i = 0; i < n; i++){
            int curr_Profit = prices[i] - buy_Price;

            if(curr_Profit > max_Profit){
                max_Profit = curr_Profit;
            }

            if(prices[i] < buy_Price){
                buy_Price = prices[i];
            }
        }
        return max_Profit;
    }
};