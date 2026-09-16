class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> lookUp;

        for(auto& word : strs) {
            string key {word}; 
            std::sort(key.begin(), key.end());
            lookUp[key].push_back(word);
        }
        
        vector<vector<string>> res;
        res.reserve(strs.size());

        for(auto& e : lookUp){
            res.push_back(e.second);
        }

    return res;
    }
};
