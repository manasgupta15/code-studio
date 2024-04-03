vector<vector<int>> directions{{1,0},{-1,0},{0,1},{0,-1}};
    bool find(vector<vector<char>>& board, int i,int j, int idx,string& word) {
        int n = board.size();
        int m = board[0].size();
        if(idx == word.length()) {
            return true;
        }

        if(i < 0 || j < 0 || i >=n || j>=m || board[i][j] == '$') {
            return false;
        }

        if(board[i][j] != word[idx]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '$';

        for(auto &dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            if(find(board, new_i,new_j,idx+1,word)) {
                return true;
            }
        }

        board[i][j] = temp;

        return false;
    }

bool present(vector<vector<char>> &board, string &word, int n, int m) 
{
    // Write your code here.
    for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(board[i][j] == word[0] && find(board,i,j,0,word)) {
                    return true;
                }
            }
        }
        return false;
}
