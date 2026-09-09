class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;
        int complement{};

        for(int i{}; i < nums.size(); i++) {
            complement = target - nums[i];
            if(map.contains(complement))
                return {map[complement],i};
            map[nums[i]] = i;
        }
    }
};
