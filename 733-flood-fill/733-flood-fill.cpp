class Solution {
public:
    void color(vector<vector<int>>& image, int rows, int cols, int sr, int sc, int newColor,                    int cellColor){
        if(sr<0 || sr>=rows || sc<0 || sc>=cols || image[sr][sc]!=cellColor) return;
        
        image[sr][sc] = newColor;
        
        color(image, rows, cols, sr+1, sc, newColor, cellColor);
        color(image, rows, cols, sr-1, sc, newColor, cellColor);
        color(image, rows, cols, sr, sc+1, newColor, cellColor);
        color(image, rows, cols, sr, sc-1, newColor, cellColor);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int rows = image.size();
        int cols = image[0].size();
        
        int cellColor = image[sr][sc];
        if(rows==0 || cellColor == newColor) return image;
        
        
        color(image, rows, cols, sr, sc, newColor, cellColor);
        
        return image;
    }
};