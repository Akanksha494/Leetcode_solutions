class Solution {
public:
    char repeatedCharacter(string s) {
     unordered_map<char,int> m;
     char ch;   
     for(int i=0;i<s.size();i++)
     {
       if(m[s[i]]==1)
       {
         return s[i];  
       }
       else
       m[s[i]]++;
     }
     
        return 'a';
    }
};