class Solution {
   public:
    int findMin(vector<int>& nums) {
        size_t l = 0;
        size_t r = nums.size() - 1;

        while (l < r) {
            if(nums[l] < nums[r]) return nums[l];
            size_t m = midpoint(l, r);
            if (nums[l] > nums[m]) {
                r = m;
            }else if (nums[m] > nums[r]) {
                l = m + 1;
            }
        }
        return nums[l];
    }
};
