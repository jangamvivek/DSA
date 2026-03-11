class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());
        int n = candyType.size();
        int uniqueTypes = s.size();

        return min(uniqueTypes, n/2);
    }
};