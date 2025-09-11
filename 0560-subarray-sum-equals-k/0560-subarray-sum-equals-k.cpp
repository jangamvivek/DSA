class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;  // prefix sum count
        mp[0] = 1; // base case: empty prefix
        int sum = 0, count = 0;
        
        for(int num : nums){
            sum += num;
            if(mp.find(sum - k) != mp.end()){
                count += mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
};
