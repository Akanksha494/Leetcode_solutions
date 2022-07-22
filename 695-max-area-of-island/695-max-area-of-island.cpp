class Solution {
public:
    int mx=0;
    
    int dfs(int i,int j,int r, int c,vector<vector<int>>& grid,int &cnt)
    {
     if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0)
         return 0;
        
     grid[i][j]=0;
        
     if(dfs(i+1,j,r,c,grid,cnt))cnt++;
     if(dfs(i,j+1,r,c,grid,cnt))cnt++;
     if(dfs(i-1,j,r,c,grid,cnt))cnt++;
     if(dfs(i,j-1,r,c,grid,cnt))cnt++;
      return 1;  
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int r=grid.size();
     int c=grid[0].size();
    
     for(int i=0;i<r;i++)
     {
      for(int j=0;j<c;j++)
      {
        if(grid[i][j]==1)
        {
            int cnt=1;
            dfs(i,j,r,c,grid,cnt);
             mx=max(mx,cnt); 
        }
           
      }
        
     }
      return mx;  
    }
};