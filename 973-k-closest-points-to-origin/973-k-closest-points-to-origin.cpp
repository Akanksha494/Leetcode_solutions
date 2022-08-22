class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       vector<vector<int>> v;
       
       priority_queue<pair<int,pair<int,int>>> pq;
        
       for(int i=0;i<points.size();i++)
       {
           int x=points[i][0],y=points[i][1];
           
           pq.push({x*x+y*y,{x,y}});
           if(pq.size()>k)
           {
               pq.pop();
           }
       }
        while(!pq.empty())
        {
           
            v.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
           
        }
        return v;
    }
};