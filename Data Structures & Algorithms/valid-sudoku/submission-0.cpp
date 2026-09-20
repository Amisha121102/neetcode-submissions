class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> rows[9], cols[9], boxes[9];
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j] == '.') continue;
                int c = board[i][j];
                int box = (i/3)*3 + (j/3);
                if(rows[i].count(c) || cols[j].count(c) || boxes[box].count(c)){
                    return false;
                }

                rows[i].insert(c);
                cols[j].insert(c);
                boxes[box].insert(c);
            }
        }
        return true;
    }
};
