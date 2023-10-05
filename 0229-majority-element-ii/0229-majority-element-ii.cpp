class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    { map <long long int,long long int> mp ;
       vector<int> ans ;
     for(int i=0;i<nums.size();i++)
      {
          mp[nums[i]]++ ;
      }
      int n = nums.size() ;
      int comp = n/3 ;
      for(auto it = mp.begin();it!=mp.end();it++)
      { // cout<<it->first<<" "<<it->second<<endl ;
          if(it->second > comp)
           ans.push_back(it->first) ;
      }
     return ans ;
    }
};