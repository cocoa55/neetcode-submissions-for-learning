class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> output;
    output.reserve(nums.size());

    vector<int> prefix;
    prefix.reserve(nums.size());
    
    vector<int> suffix;
    suffix.reserve(nums.size());

//First, we iterate from left to right and store the prefix products for each index in a prefix array, excluding the current index's number.
    int total {1};
   for(auto& e : nums) {
    prefix.push_back(total);
    total *= e;
   }
//Then, we iterate from right to left and store the suffix products for each index in a suffix array, also excluding the current index's number. 
    total = 1;
    for(int i {static_cast<int>(nums.size() - 1)}; i >= 0; i--){
        suffix[i] = total; 
        total *= nums[i];
    }
    
    for(int i{}; i < nums.size(); i++){
        output.push_back(prefix[i] * suffix[i]);
    }

    return output;
    }
};
