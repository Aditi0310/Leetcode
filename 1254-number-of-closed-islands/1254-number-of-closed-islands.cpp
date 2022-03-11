class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int rows, int cols, int i, int j){
        if(i<0 || i>=rows || j<0 || j>=cols) return false;
        
        if(grid[i][j]==1) return true;
        //if it comes here in this line it means 0 is in the cell.
        
        grid[i][j]=1;
        
       /* WHY I CANNOT USE `return dfs(g, i+1, j) && dfs(g, i, j+1) && dfs(g, i-1, j) && dfs(g, i, j-1);`???
        BECAUSE IF ANY OF THE FIRST DFS() RETURNS FALSE, FOLLOWING ONES WILL NOT EXECUTE!!! THEN WE DON'T
        HAVE THE CHANCE TO MARK THOSE 0s TO 1s!!!
        */
        bool d1 = dfs(grid, rows, cols, i+1, j);
        bool d2 = dfs(grid, rows, cols, i-1, j);
        bool d3 = dfs(grid, rows, cols, i, j+1);
        bool d4 = dfs(grid, rows, cols, i, j-1);
        return d1 && d2 && d3 && d4;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int num =0;
        
        if(rows==0) return 0;
        for(int i=0 ; i<rows; i++){
            for(int j=0 ; j<cols ; j++){
                if(grid[i][j]==0){
                    if(dfs(grid, rows, cols, i, j)) //if it returns true
                        num+=1;
                }
            }
        }
        return num;
    }
};