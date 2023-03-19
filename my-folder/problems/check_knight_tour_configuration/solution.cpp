class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        bool ch = true;
        int n = grid.size();
        int x = 0,y=0,z=1;
        if(grid[0][0]!=0){
            return false;
        }
        for(int i=1;i<n*n;i++){
            if(x-1>=0 && y-2>=0 ){
                if(grid[x-1][y-2]==z){
                    x-=1;y-=2;z++;
                    //cout<<i<<" ";
                    continue;
                }
            }
            if(x-1>=0 && y+2<=n-1 ){
                if(grid[x-1][y+2]==z){
                x-=1;y+=2;z++;
                //cout<<i<<" ";
                continue;
                }
            }
            
            if(x+1<=n-1 && y-2>=0 ){
                if(grid[x+1][y-2]==z){
                x+=1;y-=2;z++;
                //cout<<i<<" ";
                continue;
                }
            }
            if(x+1<=n-1 && y+2<=n-1 ){
                if(grid[x+1][y+2]==z){
                    x+=1;y+=2;z++;
                    //cout<<i<<" "<<x<<" "<<y<<"  ";
                    continue;
                }
            }
            if(x-2>=0 && y-1>=0 ){
                if(grid[x-2][y-1]==z){
                x-=2;y-=1;z++;
                //cout<<i<<" ";
                continue;
                }
            }
            if(x-2>=0 && y+1<=n-1 ){
                if(grid[x-2][y+1]==z){
                x-=2;y+=1;z++;
                //cout<<i<<" ";
                continue;
                }
            }
            if(x+2<=n-1 && y-1>=0){
                if(grid[x+2][y-1]==z){
                x+=2;y-=1;z++;
                //cout<<i<<" ";
                continue;
                }
            }
            if(x+2<=n-1 && y+1<=n-1 ){
                if(grid[x+2][y+1]==z){
                    x+=2;y+=1;z++;
                    //cout<<i<<" ";
                    continue;
                }
            }
            ch = false;
            break;
        }
        return ch;
    }
};