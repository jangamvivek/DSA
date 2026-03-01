class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int i = 0, sum = 0;

        for(int j=0 ; j<n ; j++){
            sum += nums[j];

            while(sum >= target){
                mini = min(mini, j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};