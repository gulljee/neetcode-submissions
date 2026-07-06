#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; ++r) {
            unordered_set<char> seen;
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] != '.' && !seen.insert(board[r][c]).second) return false;
            }
        }

        for (int c = 0; c < 9; ++c) {
            unordered_set<char> seen;
            for (int r = 0; r < 9; ++r) {
                if (board[r][c] != '.' && !seen.insert(board[r][c]).second) return false;
            }
        }

        for (int box = 0; box < 9; ++box) {
            unordered_set<char> seen;
            
            int startRow = (box / 3) * 3;
            int startCol = (box % 3) * 3;
            
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    char num = board[startRow + i][startCol + j];
                    if (num != '.') {
                        if (seen.count(num)) return false;
                        seen.insert(num);
                    }
                }
            }
        }

        return true;
    }
};