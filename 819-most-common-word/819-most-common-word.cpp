class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
     unordered_map<string,int> mp;
     string s="";   
     for(int i=0;i<paragraph.size();i++)
     {
       if(paragraph[i]>='a'&&paragraph[i]<='z'||paragraph[i]>='A'&&paragraph[i]<='Z') 
       {
           s+=tolower(paragraph[i]);
       }
       else
       {
           if(s.size()>0){
           mp[s]++;
           s="";
           }
       }
     }
     mp[s]++;  
     for(auto it:banned)
     {
         mp[it]=0;
     }
     int max_freq=0; 
     
     for(auto i:mp)
     {
       if(i.second>=max_freq)
       {
           max_freq=i.second;
           s=i.first;
       }
     }
    return s;
    }
};