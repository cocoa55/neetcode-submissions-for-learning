class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r) {
            int midpoint {std::midpoint(l, r)};

            if(target > nums[midpoint]) {
                l = midpoint + 1;
            }
            else if (target < nums[midpoint]) {
                r = midpoint - 1;
            }   
            else {
                return midpoint;
            }

        }
        return -1;
    }
};
