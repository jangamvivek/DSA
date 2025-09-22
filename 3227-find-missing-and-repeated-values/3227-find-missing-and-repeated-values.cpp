class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    int total = n * n;
    vector<int> hash(total + 1, 0);

    for (int i = 0; i < total; i++) {
        int val = grid[i / n][i % n];
        hash[val]++;
    }

    int repeating = -1, missing = -1;
    for(int i = 1; i <= total; i++) {
        if(hash[i] == 2) repeating = i;
        else if(hash[i] == 0) missing = i;

        if(repeating != -1 && missing != -1){
            break;
        }
    }
    return {repeating, missing};
    }
};