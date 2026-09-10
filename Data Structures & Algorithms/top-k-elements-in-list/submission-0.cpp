//in other words, return the 2 most frequent elements within the array

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

            using count = int;
            using number = int;
            unordered_map<number, count> lookUpCount;

            for(auto& num : nums)
                lookUpCount[num]++;

        vector<pair<number, count>> freqVec(lookUpCount.begin(), lookUpCount.end());
        
        sort(freqVec.begin(), freqVec.end(), [](pair<int, int> one, pair<int, int> two){return one.second > two.second;});
    

    vector<int> result;
    result.reserve(k);

        for (size_t i{}; i < k; i++) {
            result.push_back(freqVec[i].first);
        }
        return result;
    }
};
