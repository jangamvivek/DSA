class Solution {
public:
    int arrangeCoins(int n) {
        long long row = 1;
        long long coins_used = 0;

        while(coins_used + row <= n){
            coins_used += row;
            row++;
        }
        row -= 1;
        return row;
    }
};