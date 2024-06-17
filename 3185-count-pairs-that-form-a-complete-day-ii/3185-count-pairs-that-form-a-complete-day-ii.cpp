class Solution {
public:
    long long countCompleteDayPairs(vector<int>& h) 
    {
        unordered_map <int,int> st ;
        long long ans = 0;
        int n = h.size() ;
      for(int i=0;i<n;i++)
      {
          h[i] = h[i]%24 ;
      }
        for(int i=0;i<n;i++)
        {
            if(st[(24-h[i])%24]!=0)
                ans+=st[(24-h[i])%24] ;
           st[h[i]]++ ;
        }
        return ans ;
      
        
    }
};