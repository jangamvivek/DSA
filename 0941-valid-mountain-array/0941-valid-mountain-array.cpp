class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 1;
        while(i < arr.size() && arr[i] > arr[i-1]){
            i+=1;
        }
        if(i==1 || i == arr.size())
            return false;

        while(i < arr.size() && arr[i] < arr[i-1]){
            i+=1;
        }
        return i == arr.size();
    }
};