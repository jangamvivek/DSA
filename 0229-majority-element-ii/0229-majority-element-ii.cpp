class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int, int> mpp;
        int n = nums.size();
        vector<int> ans;
		int mm = (n/3) + 1;

        for(int i=0; i < n; i++){
            mpp[nums[i]]++;
			if(mpp[nums[i]] == mm){
				ans.push_back(nums[i]);
			}
        }

        return ans;
    }
};