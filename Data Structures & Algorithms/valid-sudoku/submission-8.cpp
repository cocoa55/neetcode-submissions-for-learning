class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        typedef char Num;
        vector<unordered_set<Num>> rows(9), 
        cols(9), 
        squares(9);
        for (int r{}; r < 9; r++) { // rows
            for (int c{}; c < 9; c++) { // columns

                char cur = board[r][c];
                if (board[r][c] == '.') continue;
                
                int square { (r / 3) * 3 + (c / 3) };

                if (rows[r].contains(cur) ||
                    cols[c].contains(cur) ||
                    squares[square].contains(cur))
                
                    return false;
                rows[r].insert(cur);
                cols[c].insert(cur);
                squares[square].insert(cur);
                
            }
        }
        return true;
    }
};
