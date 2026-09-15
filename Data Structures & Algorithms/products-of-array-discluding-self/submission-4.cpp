class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();

            vector<int> res (n, 1);
            //nums = [1, 2, 4, 6]

            for(int i {1}; i < n; i++) { 
                res[i] = res[i - 1] * nums [i - 1];
            }
            //int i {1}, 1 < 4, i++
            //res[1-1](1) * nums[1 - 1](1) therf res[1] = 1
            //int i {2}, 2 < 4, i++
            //res[2-1](1) * nums[2 - 1](2) therf res[2] = 2
            //int i {3}, 3 < 4, i++
            //res[3-1](1) * nums[3 - 1](4) therf res[3] = 4            
            //int i {4}, 4 < 4//

            //res [1,1,2,4]

            int postfix = 1;

            for(int i{n - 1}; i >= 0; i--) {
                res[i] *= postfix;
                postfix *= nums[i];
            }
            //int i{3}; 3 >= 0; i--
            //res[3](4) *= postfix(1)
            //postfix(1) *= nums[3](6), postfix = 6
            //int i{2}; 2 >= 0; i--
            //res[2](2) *= postfix(6) therf res[2] = 12
            //postfix(6) *= nums[2](4), postfix = 24
            //int i{1}; 1 >= 0; i--
            //res[1](1) *= postfix(24), therf res[1] = 24
            //postfix(24) *= nums[1](2), postfix = 48
            //int i{0}; 0 >= 0; i--
            //res[0](1) *= 48

            //res = {48, 24, 12, 6}


    return res;
    }
};
