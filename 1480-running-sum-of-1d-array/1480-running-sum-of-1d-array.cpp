class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        vector<int> ans;

        ans.push_back(sum);
        for(int i = 1 ; i < n ; i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};