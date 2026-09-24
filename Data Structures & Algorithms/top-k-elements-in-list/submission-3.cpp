class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        using Freq = int;
        using Num = int;

        unordered_map<Num, Freq> frequency;

        for(auto& num : nums) {
            frequency[num]++;
        }

        priority_queue<pair<int, int>> pq;

         for(auto& p: frequency) {
            pq.push({p.second, p.first});
        }

        vector<int> res;
        res.reserve(static_cast<size_t>(k));

        for(int i{0}; i < k; i++) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
