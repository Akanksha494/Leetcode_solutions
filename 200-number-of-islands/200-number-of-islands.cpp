class Solution {
public:
    void dfs(int x,int y,int r,int c,vector<vector<char>>& grid)
    {
        if(x<0 || y<0 || x>=r || y>=c|| grid[x][y]=='0'|| grid[x][y]=='2')
            return;
        
        grid[x][y]='2';
        
         dfs(x+1,y, r,c,grid);
         dfs(x,y+1, r,c,grid);
         dfs(x-1,y, r,c,grid);
         dfs(x,y-1, r,c,grid);
                    
            
    
    }
    int numIslands(vector<vector<char>>& grid) {
    int r=grid.size();
    if(r==0)
        return 0;
    int c=grid[0].size();
    int cnt=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(grid[i][j]=='1')
            {
            dfs(i,j,r,c,grid);
            cnt++;
            }
        }
            
    }
        return cnt;
    }
};