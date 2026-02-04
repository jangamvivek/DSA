class RandomizedSet {
public:
    unordered_map<int, int> numMap;
    vector<int> numList;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if (numMap.count(val)) return false;
        
        numList.push_back(val);
  
        numMap[val] = numList.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        // if val does not exist
        if (!numMap.count(val)) return false;
        
        int idx = numMap[val];
        int lastVal = numList.back();
        
        // move last element to idx
        numList[idx] = lastVal;
        numMap[lastVal] = idx;
        
        // remove last
        numList.pop_back();
        numMap.erase(val);
        
        return true;
    }
    
    int getRandom() {
        int randIdx = rand() % numList.size();
        return numList[randIdx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */