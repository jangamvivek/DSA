class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size() / 2, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second > n){
                ans = it.first;
            }
        }
        return ans;
    }
};