class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<int> windows;

        int l = {0};

        for(int r{0}; r < nums.size(); r++) {
            if(r - l + 1 > k + 1) {
                windows.erase(nums[l]);
                l++;
            }
            if(windows.contains(nums[r])) {
                return true;
            }
            windows.insert(nums[r]);
        }
        return false;
        }
};