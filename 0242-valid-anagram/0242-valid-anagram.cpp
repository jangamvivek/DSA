class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<int, int> countS;
        map<int, int> countT;

        for(int i=0; i<s.size(); i++){
            countS[s[i]] = 1 + countS[s[i]];
            countT[t[i]] = 1 + countT[t[i]];
        }
        for (auto &it : countS) {
            if (countT[it.first] != it.second) return false;
        }

        return true;
    }
};