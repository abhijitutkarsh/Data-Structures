class Solution {
public:
    
    void dfs(int& area, int i , int j, vector<vector<int>>&grid)
    {
        if(i<0 or j<0 or i>=grid.size() or j>= grid[0].size())return ;
        
        if(grid[i][j] == 0) return ;
        
        area++;
        grid[i][j] =0;
        
        dfs(area , i+1,j ,grid);
        dfs(area , i-1,j ,grid);
        dfs(area , i,j+1 ,grid);
        dfs(area , i,j-1 ,grid);

    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int maxarea = 0;
        
        for(int i =0 ; i<grid.size(); i++)
        {
            for(int j = 0 ; j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    int area = 0;
                    dfs(area, i, j, grid);
                    maxarea = max(area, maxarea);
                }
                
            }
        }
        return maxarea;
    }
};
