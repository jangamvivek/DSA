class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0, totCost = 0;
        
        int currGas = 0, start = 0;
        for(int i=0; i<gas.size(); i++){
            totGas += gas[i];
            totCost += cost[i];
            
            currGas += (gas[i] - cost[i]);

            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }

        if(totGas < totCost) {
            return -1;
        }

        return start;
    }
};