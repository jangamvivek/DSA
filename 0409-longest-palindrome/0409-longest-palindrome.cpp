class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int length = 0;

        for(char ch : s){
            if(st.count(ch)){
                st.erase(ch);
                length += 2;
            }else {
                st.insert(ch);
            }
        }
        if(!st.empty()) length += 1;
        return length;
    }
};