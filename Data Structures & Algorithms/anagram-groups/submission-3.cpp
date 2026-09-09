class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(auto& word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            map[key].push_back(word);

        }
        vector<vector<string>> result;
        result.reserve(map.size());

        for(auto &i : map)
            result.push_back(i.second);
        return result;
    }

};
