class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);

        for(char c : s1){
            s1Count[c - 'a']++;
        }

        for(int i = 0; i < s2.length(); i++) {
            windowCount[s2[i] - 'a']++;

            if(i >= s1.length()){
                windowCount[s2[i - s1.length()] - 'a']--;
            }

            if(i >= s1.length() - 1) {
                if(windowCount == s1Count) {
                    return true;
                }
            }
        }
        return false;
    }
};