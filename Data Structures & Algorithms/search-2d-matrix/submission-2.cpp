class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cols_num = matrix[0].size();
        int rows_num = matrix.size();
        int l = 0;
        int r = cols_num * rows_num - 1;
        
        while(l <= r) {
            int mid = l + (r - l) / 2;
            int row = mid / cols_num;
            int col = mid % cols_num;
            int midval = matrix[row][col];
            
            if(midval < target) {
                l = mid + 1;
            } else if(midval > target){
                r = mid - 1;
            } else if(midval == target) {
                return true;
            }

        }

        return false;
    }
};
