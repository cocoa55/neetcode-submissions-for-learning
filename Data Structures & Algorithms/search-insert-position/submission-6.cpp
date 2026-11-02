class Solution {
   public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;

        while (l <= r) {
            int m = std::midpoint(l, r);
            if (target > nums[r]) return r + 1;
            if (target < nums[l]) return l;
            m = std::midpoint(l, r);
            if (nums[m] > target) {
                r = m - 1;
            } else if (nums[m] < target) {
                l = m + 1;
            } else
                return m;
        }
    }
};