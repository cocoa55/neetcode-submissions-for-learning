class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int n = static_cast<int>(matrix[0].size()) - 1;
        int r = n;
        for (auto& row : matrix) {
            if (row[l] <= target && row[r] >= target) {
                if (row[l] == target) return true;
                if (row[r] == target) return true;
                while (l < r) {
                    int m = midpoint(l, r);
                    if (row[m] == target)
                        return true;
                    else if (row[m] > target) {
                        r = m;
                    } else {
                        l = m + 1;
                    }
                }
                return false;
            } else {
                continue;
            }
        }
        return false;
    }
};
