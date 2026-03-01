class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        double maxSum = -1e9;

        for(int i=0; i<n; i++){
            sum += nums[i];

            if(i >= k){
                sum -= nums[i-k];
            }

            if(i >= k-1){
                maxSum =  max(maxSum, sum);
            }
        }
        return maxSum / k;
    }
};