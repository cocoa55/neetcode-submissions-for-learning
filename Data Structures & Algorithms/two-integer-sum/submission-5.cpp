class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;


        for(int i{}; i < nums.size(); i++) {
            int complement{target - nums[i]};
            if(map.contains(complement))
                return {map[complement],i};
            map[nums[i]] = i;
        }
        return {};
        }
    
};
