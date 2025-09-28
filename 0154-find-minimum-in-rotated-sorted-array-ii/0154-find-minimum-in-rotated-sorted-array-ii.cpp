class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than high, min must be in right half
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            // If mid element is smaller than high, min must be in left half (including mid)
            else if (nums[mid] < nums[high]) {
                high = mid;
            }
            // nums[mid] == nums[high], can't decide → shrink search space
            else {
                high--;
            }
        }
        return nums[low];
    }
};
