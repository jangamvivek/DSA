class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;
        vector<int> freq(101, 0);

        int i = 0;
        for(int j = 0; j < n; j++) {
            freq[nums[j] + 50]++;

            if(j - i + 1 == k) {
                int count = 0;
                int beauty = 0;
                
                for(int val = 0; val < 50; val++) {
                    count += freq[val];
                    
                    if(count >= x) {
                        beauty = val - 50; 
                        break;
                    }
                }

                result.push_back(beauty);
                
                // Step 4: Remove outgoing element
                freq[nums[i] + 50]--;
                i++;  // slide window
            }
        }
        return result;
    }
};