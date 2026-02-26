class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        int rank = 1;
        map<int, int> mp;

        for(int i=0; i<temp.size(); i++){
            if(mp[temp[i]] == 0){
                mp[temp[i]] = rank;
                rank++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};