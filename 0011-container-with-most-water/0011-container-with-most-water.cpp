class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int mw = 0;
        int left = 0, right = n - 1;

        while(left < right){
                int w = right - left;
                int ht = min(height[left], height[right]);
                int currentWater = w * ht;
                mw = max(mw, currentWater);

                height[left] < height[right] ? left++ : right--;
        }
        return mw;
    }
};