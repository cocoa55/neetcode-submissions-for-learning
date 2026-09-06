
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<std::string, std::vector<std::string>> lookUpCount;

        for (auto& word: strs) {
            string key = word;

            std::sort(key.begin(), key.end());

            lookUpCount[key].push_back(word);

        }
        vector<vector<string>> result;

        for (auto& i : lookUpCount) {
            result.push_back(i.second);
        }
        return result;
    }
};