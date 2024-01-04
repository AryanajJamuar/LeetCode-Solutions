class Solution {
public:
    int minOperations(vector<int>& nums) 
    {  map <int,int> mp ;
       int n = nums.size() ;
       int ans = 0 ;
       for(int i=0;i<n;i++) 
       { mp[nums[i]]++ ;
           
       }  
     for(auto it = mp.begin();it!=mp.end();it++)
     {
         int x = it->second ;
         if(x==1)
             return -1 ;
         if(x%3==0)
            ans+=x/3 ;
         else 
             ans+=(x/3 + 1) ;
     }
      return ans ;
           
    }
};