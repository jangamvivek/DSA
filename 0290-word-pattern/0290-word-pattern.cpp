class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        for(char ch: s){
            if(ch != ' '){
                temp += ch;
            }else{
                words.push_back(temp);
                temp = "";
            }
        }
        words.push_back(temp);

        if(words.size() != pattern.size()) return false;
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        
        for(int i = 0; i < pattern.size() ; i++){
            char p = pattern[i];
            string w = words[i];

            if(map1.count(p) && map1[p] != w) return false;

            if(map2.count(w) && map2[w] != p) return false;

            map1[p] = w;
            map2[w] = p;
        }
        return true;
    }
};