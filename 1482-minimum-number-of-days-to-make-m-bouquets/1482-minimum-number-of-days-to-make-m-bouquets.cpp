class Solution {
public:
    bool check(vector<int>& b, int m, int k,int d)
    {
        int n = b.size() ;
        int ans = 0 ;
        int stack  = 0 ;
        int i = 0 ;
        while(i<n)
        {
            if(b[i]<=d)
            {
                stack++ ;
                if(stack==k)
                {   ans++ ;
                 stack = 0 ;
                }
                
                
                
                
                    
            }
            else 
                stack = 0;
            i++ ;
            
        }
        if(ans>=m)
            return true ;
        else 
            return false ;
        
    }
    int minDays(vector<int>& b, int m, int k) 
    {
        int n = b.size () ;

        
        // binary search on result commence
        int max = *max_element(b.begin(), b.end()) ;
        int l = 1 , r = max ;
        if(check(b,m,k,max)==false)
            return -1 ;
        while(l<r)
        {
            int mid = r - (r-l)/2 ;
            if(check(b,m,k,mid)==false) //check is false
                l = mid+1 ;
            else 
            { // check is true
                if(check(b,m,k,mid-1)==false)
                    return mid ;
                else 
                    r= mid-1 ;
            }
            
            
        }
        return l ;
        
    }
};