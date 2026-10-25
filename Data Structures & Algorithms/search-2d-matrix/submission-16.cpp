class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row : matrix) {
            if (row.front() <= target && row.back() >= target) {
                if (std::binary_search(row.begin(), row.end(), target)) return true;
            }
        }
        return false;
    }
};
