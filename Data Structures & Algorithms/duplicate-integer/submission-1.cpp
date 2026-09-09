class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for(auto& e : nums) {
            if(map.contains(e))
                return true;
            map[e] = e;
        }
        return false;
    }
};