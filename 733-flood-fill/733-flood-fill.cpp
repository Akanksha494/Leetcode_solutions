class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc, int color,int val)
    {
        if(sr<0 || sr>=image.size() || sc<0 ||sc>=image[0].size()||image[sr][sc]==color||image[sr][sc]!=val)
        {
            return;
        }
        image[sr][sc]=color;
        solve(image,sr+1,sc,color,val);
        solve(image,sr,sc+1,color,val);
        solve(image,sr-1,sc,color,val);
        solve(image,sr,sc-1,color,val);
    }           
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     int val=image[sr][sc];
     solve(image,sr,sc,color,val);
        return image;
    }
};