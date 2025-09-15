class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n = nums.size();
        int cnt = 1, longest = 1;
        
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i - 1]){
                cnt++;
                longest = max(longest, cnt);
            }
            else{
                cnt = 1;
            }
        } 
        return longest;
    }
};