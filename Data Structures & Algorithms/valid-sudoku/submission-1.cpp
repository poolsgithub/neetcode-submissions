class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<vector<bool>> row(9, vector<bool>(9,false));
       vector<vector<bool>> col(9, vector<bool>(9,false));
       vector<vector<bool>> box(9, vector<bool>(9,false));

       for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.') continue;

            int num = board[i][j] - '1';
            //row
            if(row[i][num]) {return false;}
            else {row[i][num] = true;} 
            //col
            if(col[j][num]) {return false;}
            else {col[j][num] = true;}
            //box
            int boxi = (i/3) * 3 + (j/3);
            if(box[boxi][num]) {return false;}
            else {box[boxi][num] = true;}
        }
       } 
       return true;
    }
};
