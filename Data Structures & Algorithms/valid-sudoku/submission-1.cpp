class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        typedef int Row;
        typedef char Num;
        std::unordered_map<Row, std::unordered_set<Num>> row, cols, boxes;
        for (int r{}; r < 9; r++) { // rows
            for (int c{}; c < 9; c++) { // columns
                if (board[r][c] == '.')
                    continue;

                if (row[r].contains(board[r][c]))
                    return false;

                row[r].insert({board[r][c]});

                if (cols[c].contains(board[r][c]))
                    return false;
                cols[c].insert({board[r][c]});

                int box = (r / 3) * 3 + (c / 3);

                if (boxes[box].contains(board[r][c]))
                    return false;
                boxes[box].insert({board[r][c]});
            }
        }
        return true;
    }
};
