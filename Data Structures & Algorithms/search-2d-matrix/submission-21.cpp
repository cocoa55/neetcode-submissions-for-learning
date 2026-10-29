class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        size_t rows = matrix.size();
        size_t cols = matrix[0].size();

        size_t left = 0;
        size_t right = (rows * cols) - 1;

        if (matrix[rows - 1][cols - 1] == target) return true;

        while (left < right) {
            size_t m = midpoint(left, right);
            size_t r = m / cols;
            size_t c = m % cols;
            if (matrix[r][c] > target) {
                right = m;
            } else if (matrix[r][c] < target) {
                left = m + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
