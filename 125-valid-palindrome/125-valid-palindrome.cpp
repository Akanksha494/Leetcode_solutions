class Solution {
public:
    bool pal(string st)
    {
        int l=0;
        int r=st.size()-1;
        while(l<r)
        {
          if(st[l]!=st[r])
          {
            return false;  
          }
          else
          {
             l++;
              r--;
          }
        }
        return true;
    }
    bool isPalindrome(string s) {
     string st="";
     for(int i=0;i<s.size();i++)
     {
      if(isupper(s[i]))
      {
          st+=tolower(s[i]);
      }
      else if(isalnum(s[i]))
      {
          st+=s[i];
      } 
     }
      return pal(st);      
    }
};