class Solution {
public:
    int maxArea(vector<int>& height) {
     int maxi=INT_MIN;
     int i=0,temp;
     int j=height.size()-1;
     while(i<=j)
     {
        if(height[i]<height[j])
         {
             temp=height[i]*(j-i);
             i++;
         }
         else 
         {
             temp=height[j]*(j-i);
             j--;
         }
        
         maxi=max(maxi,temp);
     }
        return maxi;
    }
};