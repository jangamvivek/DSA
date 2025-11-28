class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        if (n < 2) return 0;
        int maxProfit = 0;
        int left = 0, right = 1;

        while(right < n){
            if(prices[left] < prices[right]){
                int profit = prices[right] - prices[left];
                if (profit > maxProfit) maxProfit = profit;
            }else{
                left = right;
            }
            right ++;
        }
    return maxProfit;
    }
};