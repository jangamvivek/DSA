class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        vector<string> ans;
        for(int i = 0; i < n; i++){
            if(number[i] == digit){
                string t = number.substr(0, i) + number.substr(i + 1);
                ans.push_back(t);
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};