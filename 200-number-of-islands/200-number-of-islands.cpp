class Solution {
public:
    void checkAdjacent(vector<vector<char>>& grid, int rows, int cols, int i, int j){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!='1') return; //base case
        
        grid[i][j]='2';
        
        checkAdjacent(grid, rows, cols, i+1, j);
        checkAdjacent(grid, rows, cols, i-1, j);
        checkAdjacent(grid, rows, cols, i, j+1);
        checkAdjacent(grid, rows, cols, i, j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        int island = 0;
        
        if(rows==0) return 0;
        for(int i=0; i<rows ; i++){
            for(int j=0; j<cols ; j++){
                if(grid[i][j] == '1'){
                    checkAdjacent(grid, rows, cols, i, j);
                    island+=1;
                }
            }
        }
        return island;
    }
};



// in this problem, we will check 