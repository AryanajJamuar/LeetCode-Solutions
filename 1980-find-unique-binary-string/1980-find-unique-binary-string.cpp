class Solution {
public:
    void add(string &b)
    { int car = 1 ;
      int now = 0 ;
      int i = b.size() -1 ;
      while(now!=0 || car!=0 and i!=-1)
      {   now = car ;
          if(b[i] == '0' and now==1)
          {
              b[i] = '1' ;
              now = 0 ;
              car = 0 ;
          }
          if(b[i] == '1' and now==1)
          {
              b[i] = '0' ;
              now = 0 ;
              car = 1 ;
          }
       i-- ;
      }
     return ;
        
    }
    string findDifferentBinaryString(vector<string>& nums) 
    {   int n = nums.size() ;
        
        string b = "" ;
        for(int i=0;i<n;i++)
            b.push_back('0') ;
        sort(nums.begin(),nums.end()) ;
        for(int i=0;i<n;i++)
        {
            if(b==nums[i])
                add(b) ;
            else
             return b ;
        }
     
     
     
        return b ;
    }
};