class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(curSum < 0){
                curSum = 0;
            }
            curSum += nums[i];
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }
};