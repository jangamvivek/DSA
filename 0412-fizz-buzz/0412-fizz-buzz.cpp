class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i = 1;
        vector<string> result;

        while(i <= n){
            if(i % 3 == 0 && i % 5 == 0){
                result.push_back("FizzBuzz");
                i++;
            }
            else if(i % 3 == 0 ){
                result.push_back("Fizz");
                i++;
            }
            else if(i % 5 == 0 ){
                result.push_back("Buzz");
                i++;
            }
            else{
                result.push_back(to_string(i));
                i++;
            }
        }
        return result;
    }
};