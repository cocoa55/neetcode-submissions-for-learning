class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> frequency;

        for (auto num : nums) frequency[num]++;

        vector<vector<int>> res;

        for (int i{}; i < nums.size(); i++) {
            frequency[nums[i]]--;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < nums.size(); j++) {
                frequency[nums[j]]--;
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int target = -(nums[i] + nums[j]);

                if (frequency[target] > 0) {
                    res.push_back({nums[i], nums[j], target});
                }
            }
        
        for (int j = i + 1; j < nums.size(); j++) {
            frequency[nums[j]]++;
        }
        } 
        return res;
    
    }
};
