class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;

        while (l <= r) {
          int m = midpoint(l, r);
          if (nums[m] == target)    return m;
          if (nums[m] < target)     l = m + 1; 
          else if(nums[m] > target) r = m - 1;
        }
        return -1;
    }
};
