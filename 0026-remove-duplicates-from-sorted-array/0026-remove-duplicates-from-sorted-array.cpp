class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 1; // Start from the second element
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i]; // Place the unique element at index k
            k++;
        }
    }
    return k;
    }
};