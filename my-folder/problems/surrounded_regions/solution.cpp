class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& board, vector<vector<int>>& vs ){
        vs[i][j]=1;
        if(i+1>=0 && i+1<board.size() && j>=0 && j<board[0].size() && board[i+1][j]=='O'){
            if(!vs[i+1][j]){
                dfs(i+1,j,board,vs);
            }
        }
        if(i-1>=0 && i-1<board.size() && j>=0 && j<board[0].size() && board[i-1][j]=='O'){
            if(!vs[i-1][j]){
                dfs(i-1,j,board,vs);
            }
        }
        if(i>=0 && i<board.size() && j+1>=0 && j+1<board[0].size() && board[i][j+1]=='O'){
            if(!vs[i][j+1]){
                dfs(i,j+1,board,vs);
            }
        }
        if(i>=0 && i<board.size() && j-1>=0 && j-1<board[0].size() && board[i][j-1]=='O'){
            if(!vs[i][j-1]){
                dfs(i,j-1,board,vs);
            }
        }
        return;
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size(),m = board[0].size();
        vector<vector<int>> vs(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(!vs[i][j] && board[i][j]=='O'){
                        dfs(i,j,board,vs);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vs[i][j]){
                    board[i][j] = 'X';
                }
            }
        }
        return;
    }
};