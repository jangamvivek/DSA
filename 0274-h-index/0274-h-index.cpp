class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end(), greater<int>());
        int idx = 0;
        while(idx < n && citations[idx] > idx){
            idx += 1;
        }
        return idx;
    }
};