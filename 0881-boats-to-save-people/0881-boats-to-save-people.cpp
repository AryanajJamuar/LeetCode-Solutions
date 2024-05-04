class Solution {
public:
    int numRescueBoats(vector<int>& p, int li) 
    {
        int ans = 0 ;
        sort(p.begin(),p.end()) ;
        int l = 0 ;
        int r = p.size()-1 ;
        while(l<r)
        {
            if(p[l]+p[r]>li)
            {  ans++ ;
              r-- ;
            }
            else 
            {
                ans++ ;
                l++ ;
                r-- ;
                
            }
        }
        if(l==r)
            ans++ ;
        return ans ;
        
    }
};