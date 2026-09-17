class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> num_set(nums.begin(), nums.end());

        int longest{};

        for(auto& num : num_set) {
                if(!num_set.contains(num - 1)){
                    int length {1};
                    while(num_set.contains(num + length))
                        length++;
                    longest = max(longest, length);
                }
        }
        return longest;
    }
};
