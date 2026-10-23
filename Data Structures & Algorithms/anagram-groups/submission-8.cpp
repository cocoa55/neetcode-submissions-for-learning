class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string, std::vector<std::string>> lookup;
        std::vector<std::vector<std::string>> res;

        for (auto& word : strs) {
            std::string copy = word;
            sort(word.begin(), word.end());
            lookup[word].push_back(copy);
        }
        for (auto& val : lookup) {
            res.push_back(val.second);
        }

        return res;
    }
};
