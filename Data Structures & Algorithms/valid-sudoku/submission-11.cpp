class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::vector<unordered_set<char>> rows(9), cols(9), boxes(9);

        for (int r{}; r < 9; r++) {
            for (int c{}; c < 9; c++) {
                char cur{board[r][c]};
                if (cur == '.') continue;
                int box{(r / 3) * 3 + (c / 3)};

                if (rows[r].contains(cur) || cols[c].contains(cur) || boxes[box].contains(cur)){
                    return false;
                }
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                boxes[box].insert(board[r][c]);
            }
        }
        return true;
    }
};
