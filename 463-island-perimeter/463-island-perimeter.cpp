class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
     int r=grid.size();
     int c=grid[0].size();
     int ans=0;   
     for(int i=0;i<r;i++)
     {
       for(int j=0;j<c;j++)
       {
         if(grid[i][j]==1)
         {
          ans+=4;
          if(i<(r-1) && grid[i+1][j]==1)ans--;
          if(j<(c-1) && grid[i][j+1]==1)ans--;
          if(i>0 && grid[i-1][j]==1)ans--;
          if(j>0 && grid[i][j-1]==1)ans--;   
         }
       }
     }
        return ans;
    }
};