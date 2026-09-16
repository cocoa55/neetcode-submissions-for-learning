class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        using Frequency = int;
        using Number = int;
        size_t n {nums.size()};

        vector<vector<Frequency>> buckets(n + 1);
        unordered_map<Number, Frequency> frequency;

        for(auto& num : nums) 
            frequency[num]++;
        
        for(const auto& [num, count] : frequency) 
            buckets[count].push_back(num);
        
        vector<Number> result;
        result.reserve(k);

        for(size_t freq {n}; freq >= 1; freq--){
              for(const auto& num : buckets[freq]){
                result.push_back(num);
                if(result.size() == k) return result;
                }
        }
    }
};
