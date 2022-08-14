class Solution {
public:
    int maxProduct(vector<int>& nums) {
    /*int mx=INT_MIN,prod=1 ;
    for(int i=0;i<nums.size();i++)
    {
      prod *= nums[i];
      mx = max(mx,prod);
      if(prod==0)
      {
          prod=1;
      }
     }
     prod=1;
     for(int i=nums.size()-1;i>=0;i--)
     {
      prod *= nums[i];
      mx = max(mx,prod);
      if(prod==0)
      {
          prod=1;
      }
     }
        
      return mx;*/
      int mx=nums[0];
      int ma=mx;
      int mi=mx;
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i]<0)
        {
            swap(ma,mi);
        }  
        ma=max(nums[i],nums[i]*ma);
        mi=min(nums[i],nums[i]*mi);
        
        mx=max(ma,mx);   
      }
     return mx;
    }
};