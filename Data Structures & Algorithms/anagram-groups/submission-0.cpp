class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<std::string, std::vector<std::string>> lookUpCount;

        for (auto& word: strs) {
            array<int, 26> frequency{};

            for (auto& ch : word) {
                frequency[ch - 'a']++;
            }

            string key = "";
            for (const auto& count : frequency) {
                key += to_string(count) + ',';
            }
                lookUpCount[key].push_back(word);
        }
        vector<vector<string>> result;

        for (auto& i : lookUpCount) {
            result.push_back(i.second);
        }
        return result;
    }
};
