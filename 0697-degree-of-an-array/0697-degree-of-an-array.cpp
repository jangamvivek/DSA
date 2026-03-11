class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> first;

        int degree = 0;
        int ans = nums.size();

        for(int i=0;i<nums.size();i++){

            if(first.count(nums[i])==0)
                first[nums[i]] = i;

            freq[nums[i]]++;

            if(freq[nums[i]] > degree){
                degree = freq[nums[i]];
                ans = i - first[nums[i]] + 1;
            }
            else if(freq[nums[i]] == degree){
                ans = min(ans, i - first[nums[i]] + 1);
            }
        }
        return ans;
    }
};