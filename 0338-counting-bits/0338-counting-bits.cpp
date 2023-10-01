class Solution {
public:
    vector<int> countBits(int n) 
{   vector<int> ans ;
    unordered_set <long long int> st ;
    for(long long int i=1;i<=17;i++)
    {
        st.insert(pow(2,i)) ;
    }
   if(n==0)
       return {0} ;
   if(n==1)
       return {0,1} ;
    vector <int> dp(100001,-1) ;
    dp[0] = 0 ;
    dp[1] = 1 ;
    ans.push_back(0) ;
    ans.push_back(1) ;
    for(int i=2;i<=n;i++)
    {  int cnt = 0 ;
        if(st.find(i)!=st.end())
        { ans.push_back(1) ;
          dp[i] = 1 ;
        }
      else if(i&1)
      { 
         int x = dp[i/2] + 1 ;
         dp[i]  = x ;
         ans.push_back(x) ;
      }
      else 
      {int x = dp[i/2]  ;
         dp[i]  = x ;
         ans.push_back(x) ;
          
      }
        
    }
 return ans ;
}
};