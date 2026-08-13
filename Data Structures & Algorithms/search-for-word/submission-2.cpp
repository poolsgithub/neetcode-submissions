class Solution {
   private:
    bool helper(vector<vector<char>>& board, string word, int row, int col, int in) {
        if (in == word.size()) return true;

        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() ||
            board[row][col] != word[in])
            return false;

        char temp = board[row][col];
        board[row][col] = '#';

        if (helper(board, word, row, col + 1, in + 1) ||
            helper(board, word, row + 1, col, in + 1) ||
            helper(board, word, row, col - 1, in + 1) ||
            helper(board, word, row - 1, col, in + 1)) {
            return true;
        }
        board[row][col] = temp;
        
        return false;
    }

   public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    if (helper(board, word, i, j, 0)) return true;
                }
            }
        }

        return false;
    }
};
