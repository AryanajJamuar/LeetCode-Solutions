class Solution {
public:
    int minPairSum(vector<int>& nums) 
    { sort(nums.begin(),nums.end()) ;
      int max = INT_MIN ;
      int l = 0 , r = nums.size() -1 ;
      while(l<r)
      {
          if(max<nums[l]+nums[r])
              max = nums[l]+nums[r] ;
          l++ ;
          r-- ;
      }
     return max ;
    }
};