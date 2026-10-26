class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        size_t cols {matrix[0].size()};
        size_t rows {matrix.size()};

        size_t left {0};
        size_t right {cols * rows - 1};
        if(matrix[rows - 1][cols - 1] == target) return true; 
        while (left < right) {
           size_t mid {midpoint(left, right)}; 
           size_t r {mid / cols};
           size_t c {mid % cols};
            if (matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) right = mid;
            else left = mid + 1; 
        }
        return false;
    }
};
