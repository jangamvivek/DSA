class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //last index nums1
        int last = m + n - 1;

        //merge in reverse order
        while(m>0 && n>0){
            if(nums1[m-1] > nums2[n-1]){
                nums1[last] = nums1[m - 1];
                m--;
            }else{
                nums1[last] = nums2[n - 1];
                n--;
            }
            last--;
        }
        //fill nums1 with leftover nums2 elements 
        while (n > 0) {
            nums1[last] = nums2[n - 1];
            n--;
            last--;
        }

    }
};