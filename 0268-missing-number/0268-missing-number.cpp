class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();  // since array has n numbers, range is [0, n]
        for (int i = 0; i <= n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) return i;
        }
        return -1;
    }
};