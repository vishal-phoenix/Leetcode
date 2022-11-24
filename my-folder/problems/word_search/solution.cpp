class Solution {
public:
    int n,m;
    bool dfs(int x,int y,vector<vector<char>>& board,string& word,int k){
        if(k==word.length()){
            return true;
        }
        //cout<<x<<" "<<y<<" "<<k<<" ";
        if(x<0 || x>=n || y<0 || y>=m || board[x][y]!=word[k]){
            return false;
        }
        //cout<<" ";
        char temp = board[x][y];
        board[x][y] = ' ';
        //cout<<temp<<" "<<k<<" ";
        bool ans = dfs(x+1,y,board,word,k+1)|| 
                    dfs(x-1,y,board,word,k+1)||
                    dfs(x,y+1,board,word,k+1)||
                    dfs(x,y-1,board,word,k+1);
        board[x][y] = temp;
        return ans;

        
    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size(),m = board[0].size();
        //vector<vector<int>> vs(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(dfs(i,j,board,word,0)) return true;
                    cout<<endl;
                }
            }
        }
        return false;
    }
};