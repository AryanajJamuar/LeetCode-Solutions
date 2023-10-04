class Solution {
public:
    int numIdenticalPairs(vector<int>& a) 
    { unordered_map <int,int> mp ;
      int ans = 0 ;
     for(int i=0;i<a.size();i++)
     { ans+=mp[a[i]]++ ;
         
     }
     return ans ;
        
    }
};