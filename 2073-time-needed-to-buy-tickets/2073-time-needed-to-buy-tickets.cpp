class Solution {
public:
    int timeRequiredToBuy(vector<int>& tick, int k) 
    {
        
        int t = 0 ;
        int tk = tick[k] ;
        for(int i=0;i<tick.size();i++)
        {
            if(i<=k)
            {
                if(tick[i]>=tk)
                    t+=tk ;
                else 
                    t+=tick[i] ;
            }
            else 
            {
                if(tick[i]>=tk)
                    t+=(tk-1) ;
                else 
                    t+=tick[i] ;
            }
        }
        return t ;
    }
};