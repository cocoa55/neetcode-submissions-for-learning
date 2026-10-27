class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> triplets;
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(size_t i{}; i < nums.size(); i++) {
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            size_t j = i + 1;
            size_t k = nums.size() - 1;
            
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum > 0) {
                    k--;
                } else if(sum < 0) {
                    j++;
                } else {
                    triplets.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(nums[j] == nums[j - 1] && j < k) {
                        j++;
                    }
                }

            } 

        }

    return triplets;
    } 
};
