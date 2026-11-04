class Solution {
   public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;
        int n = r;

        while (l <= r) {
            int m = midpoint(l, r);
            if (nums[m] == target) return true;
            if (nums[l] < nums[m]) {  // Left portion
                if (nums[l] <= target && nums[m] > target)
                    r = m - 1;
                else
                    l = m + 1;
            } else if (nums[l] > nums[m]) {  // Right portion
                if(nums[r] >= target && nums[m] < target) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            } else {
                l++;
            }
        }
        return false;
    }
};