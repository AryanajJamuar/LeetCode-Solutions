class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    { map <int,int> x ;
        map <int,int> mp ;
     int maxi = 0;
     
      for(int i=0;i<nums.size();i++)
      { x[nums[i]]++ ;
        maxi = max(maxi,x[nums[i]]) ;
          
      }
      vector<vector<int>> ans(maxi) ;
      for(int i=0;i<nums.size();i++)
      {
        mp[nums[i]]++ ;
        ans[mp[nums[i]]-1].push_back(nums[i]) ;
      }
     return ans ;
      
    }
};