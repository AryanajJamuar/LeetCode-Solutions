class Solution {
public:
    int countCompleteDayPairs(vector<int>& h) 
    {
        int ans = 0 ;
        int n = h.size() ;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((h[i]+h[j])%24==0)
                    ans++ ;
            }
        }
        return ans ;
        
    }
};