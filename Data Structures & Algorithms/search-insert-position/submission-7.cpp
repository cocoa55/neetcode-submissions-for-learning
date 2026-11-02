class Solution {
   public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;

        while (l <= r) {
            int m = std::midpoint(l, r);
            m = std::midpoint(l, r);
            if (nums[m] > target) {
                r = m - 1;
            } else if (nums[m] < target) {
                l = m + 1;
            } else
                return m;
        }
        return l;
    }
};