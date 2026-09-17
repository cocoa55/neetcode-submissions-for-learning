class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp; //num freq

        for(auto& num : nums)
            mp[num]++;
        
        priority_queue<pair<int, int>> pq; 

        for(auto& p : mp) {
            pq.push({p.second, p.first}); //pq keeps track of the 
        }

        vector<int> ans;
        ans.reserve(k);

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
