class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> myset;
        
        for(int i = 0; i < 9; i++) {
            myset.clear(); 
            for(int j = 0; j < 9; j++) {
                char current_val = board[i][j];
                
                if(current_val == '.') continue; 
                
                if(myset.contains(current_val)) {
                    return false; 
                } else {
                    myset.insert(current_val);
                }
            }
        }

        for(int i = 0; i < 9; i++) {
            myset.clear(); 
            for(int j = 0; j < 9; j++) {
                char current_val = board[j][i]; 
                
                if(current_val == '.') continue; 
                
                if(myset.contains(current_val)) {
                    return false; 
                } else {
                    myset.insert(current_val);
                }
            }
        }
        
        for(int box_row = 0; box_row < 3; box_row++) {
            for(int box_col = 0; box_col < 3; box_col++) {
                
                myset.clear(); 
                
                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        
                        int actual_row = (box_row * 3) + i;
                        int actual_col = (box_col * 3) + j;
                        
                        char current_val = board[actual_row][actual_col];
                        
                        if(current_val == '.') continue;
                        
                        if(myset.contains(current_val)) {
                            return false; 
                        } else {
                            myset.insert(current_val);
                        }
                    }
                }
            }
        }
        
        return true; 
    }
};