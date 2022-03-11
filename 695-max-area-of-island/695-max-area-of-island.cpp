class Solution {
public:
    void findIsland(vector<vector<int>>& grid,int rows,int cols,int i,int j, int &sum, 
                    int& maxi){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!=1) return;
        if(grid[i][j] == 1){
            sum++;
            grid[i][j]=2;
            maxi = max(sum, maxi);
        }
        
        
         findIsland(grid, rows, cols, i+1, j, sum, maxi);
                    findIsland(grid, rows,cols,i-1,j, sum, maxi);
                    findIsland(grid, rows, cols, i, j+1, sum, maxi);
                    findIsland(grid, rows, cols, i, j-1, sum, maxi);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxi = 0;
        if(rows==0) return 0;
        
        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++){
                if(grid[i][j]==1){
                    int sum = 0;
                    findIsland(grid, rows, cols, i, j, sum, maxi);
                
                }
            }
        }
        return maxi;
    }
};


//dfs to find out the no. of island