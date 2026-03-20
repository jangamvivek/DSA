class Solution {
public:
    int numSub(string s) {
        long long count = 0, curr = 0;
        int mod = 1e9 + 7;

        for(char ch : s){
            if(ch == '1'){
                curr++;
                count = (count + curr) % mod;
            } else {
                curr = 0;
            }
        }

        return count;
    }
};